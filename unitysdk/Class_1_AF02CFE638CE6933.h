#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/System/Object.h"

class Class_1_BB3F15F93FE67DCD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AF02CFE638CE6933_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC30AF20)
#define CLASS_1_AF02CFE638CE6933_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC309E20)
#define CLASS_1_AF02CFE638CE6933_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xC30A460)
#define CLASS_1_AF02CFE638CE6933_METHOD_1_9C701166400EBE3C_OFFSET UNITYSDK_OFFSET(0xC30AE40)
#define CLASS_1_AF02CFE638CE6933_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xC30A1F0)
#define CLASS_1_AF02CFE638CE6933_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC30AF80)
#define CLASS_1_AF02CFE638CE6933__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC309F20)
#define CLASS_1_AF02CFE638CE6933__CTOR_2_OFFSET UNITYSDK_OFFSET(0xC30A020)
#define CLASS_1_AF02CFE638CE6933__CTOR_OFFSET UNITYSDK_OFFSET(0xC309E80)

inline static constexpr unsigned int Class_1_AF02CFE638CE6933_TypeDefinitionIndex = 52011;

class Class_1_AF02CFE638CE6933 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* HOBBEEKFHMC; // 0x10
	::System::Collections::Generic::List_1<::Class_1_BB3F15F93FE67DCD*>* JICHIMGAPJG; // 0x18
	::System::Collections::Generic::List_1<::Class_1_BB3F15F93FE67DCD*>* MDOPNHHJLKD; // 0x20
	::System::Collections::Generic::List_1<::Class_1_BB3F15F93FE67DCD*>* GHBNBDKPOMI; // 0x28
	::RPG::GameCore::MissionBeginType HJJGKDENMMK; // 0x30
	::System::UInt32 PHFMCACHFIJ; // 0x34
	::RPG::GameCore::MainMissionType GMPGDEINODK; // 0x38
	::System::Int32 GFELEAKHMEO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_BB3F15F93FE67DCD*>* a2, ::RPG::GameCore::MainMissionType a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::RPG::GameCore::MissionBeginType a5, ::System::Collections::Generic::List_1<::Class_1_BB3F15F93FE67DCD*>* a6, ::System::Collections::Generic::List_1<::Class_1_BB3F15F93FE67DCD*>* a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_BB3F15F93FE67DCD*>*, ::RPG::GameCore::MainMissionType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::MissionBeginType, ::System::Collections::Generic::List_1<::Class_1_BB3F15F93FE67DCD*>*, ::System::Collections::Generic::List_1<::Class_1_BB3F15F93FE67DCD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void _ctor_2(::Class_1_AF02CFE638CE6933* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF02CFE638CE6933*))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933__CTOR_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::UInt32 Method_1_9C701166400EBE3C(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_METHOD_1_9C701166400EBE3C_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_AF02CFE638CE6933* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_AF02CFE638CE6933*))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_TOSTRING_OFFSET))(this);
	}
};
