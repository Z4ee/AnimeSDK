#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define CLASS_1_4B17F765B096DA0B_COMPARE_OFFSET UNITYSDK_OFFSET(0x177B9E30)
#define CLASS_1_4B17F765B096DA0B__CCTOR_OFFSET UNITYSDK_OFFSET(0x177BA250)
#define CLASS_1_4B17F765B096DA0B__CTOR_OFFSET UNITYSDK_OFFSET(0x177BA240)

inline static constexpr unsigned int Class_1_4B17F765B096DA0B_TypeDefinitionIndex = 79875;

class Class_1_4B17F765B096DA0B : public ::System::Object
{
public:
	static ::Class_1_4B17F765B096DA0B** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_4B17F765B096DA0B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B17F765B096DA0B_TypeDefinitionIndex)->GetStaticField(0x3690);
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
