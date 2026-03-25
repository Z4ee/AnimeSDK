#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_9F7A7BFCC6CA78B0_Class_1_67A2BED16D2FA6D4;
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildRecipe; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9F7A7BFCC6CA78B0_GET_HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0x115C6690)
#define CLASS_1_9F7A7BFCC6CA78B0_GET_TEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0x115C6670)
#define CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_508D301AB87A9703_OFFSET UNITYSDK_OFFSET(0x115C7890)
#define CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_6823B2499C7AC739_OFFSET UNITYSDK_OFFSET(0x115C7B20)
#define CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_86F63D2E68955058_OFFSET UNITYSDK_OFFSET(0x115C7E50)
#define CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0x115C68D0)
#define CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_A07C2061B55C1547_OFFSET UNITYSDK_OFFSET(0x115C6AC0)
#define CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x115C66B0)
#define CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_E18E06C02E2B1E0A_OFFSET UNITYSDK_OFFSET(0x115C71F0)
#define CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_E4650AE9F3C4C883_OFFSET UNITYSDK_OFFSET(0x115C6700)
#define CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_E9AD8FDC7FC92DD0_OFFSET UNITYSDK_OFFSET(0x115C6570)
#define CLASS_1_9F7A7BFCC6CA78B0_SET_HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0x115C66A0)
#define CLASS_1_9F7A7BFCC6CA78B0_SET_TEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0x115C6680)
#define CLASS_1_9F7A7BFCC6CA78B0__CTOR_OFFSET UNITYSDK_OFFSET(0x115C8010)

inline static constexpr unsigned int Class_1_9F7A7BFCC6CA78B0_TypeDefinitionIndex = 55574;

class Class_1_9F7A7BFCC6CA78B0 : public ::System::Object
{
public:
	::RPG::Client::TeamBuildRecipe* _TeamBuildRecipe_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_9F7A7BFCC6CA78B0_Class_1_67A2BED16D2FA6D4*>* Field_1_1; // 0x18
	::System::Func_2<::System::UInt32, ::System::Boolean>* _HasAvatarChecker_k__BackingField; // 0x20
	::System::Nullable_1<::System::Int32> Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_E9AD8FDC7FC92DD0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_E9AD8FDC7FC92DD0_OFFSET))(this);
	}

	::RPG::Client::TeamBuildRecipe* get_TeamBuildRecipe()
	{
		return ((::RPG::Client::TeamBuildRecipe*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_GET_TEAMBUILDRECIPE_OFFSET))(this);
	}

	::System::Void set_TeamBuildRecipe(::RPG::Client::TeamBuildRecipe* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_SET_TEAMBUILDRECIPE_OFFSET))(this, value);
	}

	::System::Func_2<::System::UInt32, ::System::Boolean>* get_HasAvatarChecker()
	{
		return ((::System::Func_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_GET_HASAVATARCHECKER_OFFSET))(this);
	}

	::System::Void set_HasAvatarChecker(::System::Func_2<::System::UInt32, ::System::Boolean>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_SET_HASAVATARCHECKER_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E4650AE9F3C4C883(::System::Collections::Generic::ICollection_1<::RPG::Client::TeamBuild*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::TeamBuild*>*))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_E4650AE9F3C4C883_OFFSET))(this, a1);
	}

	::System::Void Method_1_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_93190E731E31C79A_OFFSET))(this);
	}

	::System::Void Method_1_A07C2061B55C1547()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_A07C2061B55C1547_OFFSET))(this);
	}

	::RPG::Client::TeamBuild* Method_1_E18E06C02E2B1E0A()
	{
		return ((::RPG::Client::TeamBuild*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_E18E06C02E2B1E0A_OFFSET))(this);
	}

	::System::Boolean Method_1_508D301AB87A9703(::RPG::Client::TeamBuild* a1, ::System::Int32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*, ::System::Int32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_508D301AB87A9703_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6823B2499C7AC739(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_6823B2499C7AC739_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_86F63D2E68955058(::System::Int32 a1, ::Class_1_9F7A7BFCC6CA78B0_Class_1_67A2BED16D2FA6D4*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_9F7A7BFCC6CA78B0_Class_1_67A2BED16D2FA6D4*&))((::PBYTE)hIl2Cpp + CLASS_1_9F7A7BFCC6CA78B0_METHOD_1_86F63D2E68955058_OFFSET))(this, a1, a2);
	}
};
