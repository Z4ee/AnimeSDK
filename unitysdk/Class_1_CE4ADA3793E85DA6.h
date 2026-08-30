#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_CE4ADA3793E85DA6_METHOD_1_4CEBECA6D9DFE57C_OFFSET UNITYSDK_OFFSET(0x18D2DBD0)
#define CLASS_1_CE4ADA3793E85DA6__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D2E8C0)
#define CLASS_1_CE4ADA3793E85DA6__CTOR_OFFSET UNITYSDK_OFFSET(0x18D2E8B0)

inline static constexpr unsigned int Class_1_CE4ADA3793E85DA6_TypeDefinitionIndex = 65366;

class Class_1_CE4ADA3793E85DA6 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_GLLBJLJJJIO()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE4ADA3793E85DA6_TypeDefinitionIndex)->GetStaticField(0x63F60);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_LCKDHILMCLE()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE4ADA3793E85DA6_TypeDefinitionIndex)->GetStaticField(0x63F68);
	}
	// static const ::System::String* ANOLLKPBNIJ; // 0x0
	// static const ::System::String* BMMMHANDLGP; // 0x0
	// static const ::System::String* KHGNJEBBDGI; // 0x0
	// static const ::System::String* GLECCDMCNII; // 0x0
	// static const ::System::String* PBPMLJPCFID; // 0x0
	// static const ::System::String* HGGABKCHDDJ; // 0x0
	// static const ::System::String* FANFGIJGIEM; // 0x0
	// static const ::System::String* FCJEFNHKENG; // 0x0
	// static const ::System::String* JFCAPNCLLLA; // 0x0
	// static const ::System::String* FHJFCHMCOLD; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE4ADA3793E85DA6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CE4ADA3793E85DA6__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_4CEBECA6D9DFE57C(::RPG::GameCore::FixPoint a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE4ADA3793E85DA6_METHOD_1_4CEBECA6D9DFE57C_OFFSET))(a1, a2);
	}
};
