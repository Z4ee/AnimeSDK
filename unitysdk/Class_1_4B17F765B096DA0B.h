#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define CLASS_1_4B17F765B096DA0B_COMPARE_OFFSET UNITYSDK_OFFSET(0x15B10390)
#define CLASS_1_4B17F765B096DA0B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B107B0)
#define CLASS_1_4B17F765B096DA0B__CTOR_OFFSET UNITYSDK_OFFSET(0x15B107A0)

inline static constexpr unsigned int Class_1_4B17F765B096DA0B_TypeDefinitionIndex = 76242;

class Class_1_4B17F765B096DA0B : public ::System::Object
{
public:
	static ::Class_1_4B17F765B096DA0B** StaticGet_Field_1_0()
	{
		return (::Class_1_4B17F765B096DA0B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B17F765B096DA0B_TypeDefinitionIndex)->GetStaticField(0x8E90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B17F765B096DA0B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B17F765B096DA0B__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_4B17F765B096DA0B_COMPARE_OFFSET))(this, a1, a2);
	}
};
