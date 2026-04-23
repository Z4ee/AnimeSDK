#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/System/Object.h"

class Class_1_8F5D4240C7285965;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AF02CFE638CE6933_COMPARETO_OFFSET UNITYSDK_OFFSET(0x11A84660)
#define CLASS_1_AF02CFE638CE6933_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x11A83A00)
#define CLASS_1_AF02CFE638CE6933_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11A83440)
#define CLASS_1_AF02CFE638CE6933_METHOD_1_2051640C55934AF6_OFFSET UNITYSDK_OFFSET(0x11A84580)
#define CLASS_1_AF02CFE638CE6933_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x11A83810)
#define CLASS_1_AF02CFE638CE6933_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11A846C0)
#define CLASS_1_AF02CFE638CE6933__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11A83540)
#define CLASS_1_AF02CFE638CE6933__CTOR_2_OFFSET UNITYSDK_OFFSET(0x11A83640)
#define CLASS_1_AF02CFE638CE6933__CTOR_OFFSET UNITYSDK_OFFSET(0x11A834A0)
#define CLASS_1_AF02CFE638CE6933___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11A847C0)

inline static constexpr unsigned int Class_1_AF02CFE638CE6933_TypeDefinitionIndex = 48009;

class Class_1_AF02CFE638CE6933 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8F5D4240C7285965*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_8F5D4240C7285965*>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Class_1_8F5D4240C7285965*>* Field_1_6; // 0x28
	::RPG::GameCore::MainMissionType Field_1_2; // 0x30
	::System::UInt32 Field_1_0; // 0x34
	::System::Int32 Field_1_7; // 0x38
	::RPG::GameCore::MissionBeginType Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_8F5D4240C7285965*>* a2, ::RPG::GameCore::MainMissionType a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::RPG::GameCore::MissionBeginType a5, ::System::Collections::Generic::List_1<::Class_1_8F5D4240C7285965*>* a6, ::System::Collections::Generic::List_1<::Class_1_8F5D4240C7285965*>* a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_8F5D4240C7285965*>*, ::RPG::GameCore::MainMissionType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::MissionBeginType, ::System::Collections::Generic::List_1<::Class_1_8F5D4240C7285965*>*, ::System::Collections::Generic::List_1<::Class_1_8F5D4240C7285965*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
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

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::UInt32 Method_1_2051640C55934AF6(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_METHOD_1_2051640C55934AF6_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_AF02CFE638CE6933* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_AF02CFE638CE6933*))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF02CFE638CE6933___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
