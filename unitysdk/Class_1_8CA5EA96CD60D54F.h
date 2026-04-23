#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/System/Object.h"

class Class_1_2E44A17C1AB85015;
class Class_1_7AB88D713F5121B3_41;
class Class_1_E754E66360B8422F;
class Class_1_F9AE7AA9DD8A83B5;
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_02CD6B722260FFA3_OFFSET UNITYSDK_OFFSET(0x9664170)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_0D3DB4633EEF9431_OFFSET UNITYSDK_OFFSET(0x9661850)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_0DA02645F51F0244_OFFSET UNITYSDK_OFFSET(0x9661780)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_34DE26F52DFE15CF_OFFSET UNITYSDK_OFFSET(0x9661890)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_49F38F0A1A6D445B_OFFSET UNITYSDK_OFFSET(0x9662800)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_64ECE5D680D6CD60_OFFSET UNITYSDK_OFFSET(0x9662B90)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_68837B85072A0ECF_OFFSET UNITYSDK_OFFSET(0x9662340)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_757EE3584481DDA0_OFFSET UNITYSDK_OFFSET(0x9662270)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_9A6F03D4079690D6_OFFSET UNITYSDK_OFFSET(0x96637E0)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x9661630)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_D3BDE193FFB431B9_OFFSET UNITYSDK_OFFSET(0x96640A0)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_D8DB1EBC3B703D9A_OFFSET UNITYSDK_OFFSET(0x9663430)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_E87CAB9F7F4A06FE_OFFSET UNITYSDK_OFFSET(0x9663BE0)
#define CLASS_1_8CA5EA96CD60D54F_METHOD_1_EC07348C95A4FA0A_OFFSET UNITYSDK_OFFSET(0x96636E0)
#define CLASS_1_8CA5EA96CD60D54F__CTOR_OFFSET UNITYSDK_OFFSET(0x9664260)

inline static constexpr unsigned int Class_1_8CA5EA96CD60D54F_TypeDefinitionIndex = 67467;

class Class_1_8CA5EA96CD60D54F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_A871253BFD471C99()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_A871253BFD471C99_OFFSET))();
	}

	static ::System::UInt32 Method_1_0DA02645F51F0244()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_0DA02645F51F0244_OFFSET))();
	}

	static ::System::UInt64 Method_1_0D3DB4633EEF9431()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_0D3DB4633EEF9431_OFFSET))();
	}

	static ::Il2CppArray<::Class_1_E754E66360B8422F*>* Method_1_34DE26F52DFE15CF()
	{
		return ((::Il2CppArray<::Class_1_E754E66360B8422F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_34DE26F52DFE15CF_OFFSET))();
	}

	static ::System::Void Method_1_68837B85072A0ECF(::Class_1_E754E66360B8422F* a1, ::Il2CppArray<::Class_1_F9AE7AA9DD8A83B5*>* a2, ::Il2CppArray<::Class_1_2E44A17C1AB85015*>* a3)
	{
		return ((::System::Void(*)(::Class_1_E754E66360B8422F*, ::Il2CppArray<::Class_1_F9AE7AA9DD8A83B5*>*, ::Il2CppArray<::Class_1_2E44A17C1AB85015*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_68837B85072A0ECF_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::Class_1_7AB88D713F5121B3_41*>* Method_1_49F38F0A1A6D445B(::Il2CppArray<::Class_1_E754E66360B8422F*>* a1)
	{
		return ((::Il2CppArray<::Class_1_7AB88D713F5121B3_41*>*(*)(::Il2CppArray<::Class_1_E754E66360B8422F*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_49F38F0A1A6D445B_OFFSET))(a1);
	}

	static ::Il2CppArray<::Class_1_2E44A17C1AB85015*>* Method_1_64ECE5D680D6CD60()
	{
		return ((::Il2CppArray<::Class_1_2E44A17C1AB85015*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_64ECE5D680D6CD60_OFFSET))();
	}

	static ::Il2CppArray<::Class_1_F9AE7AA9DD8A83B5*>* Method_1_D8DB1EBC3B703D9A()
	{
		return ((::Il2CppArray<::Class_1_F9AE7AA9DD8A83B5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_D8DB1EBC3B703D9A_OFFSET))();
	}

	static ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* Method_1_EC07348C95A4FA0A(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*(*)(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_EC07348C95A4FA0A_OFFSET))(a1);
	}

	static ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* Method_1_9A6F03D4079690D6(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_9A6F03D4079690D6_OFFSET))(a1);
	}

	static ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* Method_1_E87CAB9F7F4A06FE()
	{
		return ((::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_E87CAB9F7F4A06FE_OFFSET))();
	}

	static ::Il2CppArray<::System::UInt32>* Method_1_D3BDE193FFB431B9()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_D3BDE193FFB431B9_OFFSET))();
	}

	static ::Il2CppArray<::System::UInt32>* Method_1_02CD6B722260FFA3()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_02CD6B722260FFA3_OFFSET))();
	}

	static ::RPG::GameCore::RtAbilityProperty Method_1_757EE3584481DDA0(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::RPG::GameCore::RtAbilityProperty(*)(::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_8CA5EA96CD60D54F_METHOD_1_757EE3584481DDA0_OFFSET))(a1);
	}
};
