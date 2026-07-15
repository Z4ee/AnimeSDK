#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }

#define CLASS_1_37CFE50712AC363B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169BC650)
#define CLASS_1_37CFE50712AC363B_GET_ISSESSIONFAILED_OFFSET UNITYSDK_OFFSET(0x169BC630)
#define CLASS_1_37CFE50712AC363B_GET_OBTAINEDSCOREDETAIL_OFFSET UNITYSDK_OFFSET(0x169BC610)
#define CLASS_1_37CFE50712AC363B_METHOD_1_4FE2BA0D6F3A8E26_OFFSET UNITYSDK_OFFSET(0x169BC440)
#define CLASS_1_37CFE50712AC363B_METHOD_1_6AF22715B16BBCDE_OFFSET UNITYSDK_OFFSET(0x169BC350)
#define CLASS_1_37CFE50712AC363B_METHOD_1_739C26C0BBA0E3EA_OFFSET UNITYSDK_OFFSET(0x169BC250)
#define CLASS_1_37CFE50712AC363B_METHOD_1_B7592B2BDF345A00_OFFSET UNITYSDK_OFFSET(0x169BC300)
#define CLASS_1_37CFE50712AC363B_SET_OBTAINEDSCOREDETAIL_OFFSET UNITYSDK_OFFSET(0x169BC620)
#define CLASS_1_37CFE50712AC363B__CTOR_OFFSET UNITYSDK_OFFSET(0x169BC640)

inline static constexpr unsigned int Class_1_37CFE50712AC363B_TypeDefinitionIndex = 76642;

class Class_1_37CFE50712AC363B : public ::System::Object
{
public:
	::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B* _ObtainedScoreDetail_k__BackingField; // 0x10
	::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* Field_1_1; // 0x18
	::System::Boolean _IsSessionFailed_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1, ::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*, ::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::TextID Method_1_739C26C0BBA0E3EA()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_METHOD_1_739C26C0BBA0E3EA_OFFSET))(this);
	}

	::System::Boolean Method_1_B7592B2BDF345A00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_METHOD_1_B7592B2BDF345A00_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_6AF22715B16BBCDE()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_METHOD_1_6AF22715B16BBCDE_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_4FE2BA0D6F3A8E26()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_METHOD_1_4FE2BA0D6F3A8E26_OFFSET))(this);
	}

	::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B* get_ObtainedScoreDetail()
	{
		return ((::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_GET_OBTAINEDSCOREDETAIL_OFFSET))(this);
	}

	::System::Void set_ObtainedScoreDetail(::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B*))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_SET_OBTAINEDSCOREDETAIL_OFFSET))(this, a1);
	}

	::System::Boolean get_IsSessionFailed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_GET_ISSESSIONFAILED_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_DISPOSE_OFFSET))(this);
	}
};
