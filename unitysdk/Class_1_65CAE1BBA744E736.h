#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightEquipConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_65CAE1BBA744E736_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x114AFA20)
#define CLASS_1_65CAE1BBA744E736_METHOD_1_460A012060B107A4_OFFSET UNITYSDK_OFFSET(0x114AF930)
#define CLASS_1_65CAE1BBA744E736_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x114AF8C0)
#define CLASS_1_65CAE1BBA744E736__CTOR_OFFSET UNITYSDK_OFFSET(0x114AFCC0)

inline static constexpr unsigned int Class_1_65CAE1BBA744E736_TypeDefinitionIndex = 52464;

class Class_1_65CAE1BBA744E736 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightEquipConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightEquipConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65CAE1BBA744E736_TypeDefinitionIndex)->GetStaticField(0x36B60);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65CAE1BBA744E736__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65CAE1BBA744E736_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::RPG::GameCore::GridFightEquipConfigRow* Method_1_460A012060B107A4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightEquipConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65CAE1BBA744E736_METHOD_1_460A012060B107A4_OFFSET))(a1);
	}

	static ::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65CAE1BBA744E736_METHOD_1_03BFDB1C3240A55A_OFFSET))();
	}
};
