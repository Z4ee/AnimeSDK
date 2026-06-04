#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }

#define CLASS_1_37CFE50712AC363B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB77B150)
#define CLASS_1_37CFE50712AC363B_GET_ISSESSIONFAILED_OFFSET UNITYSDK_OFFSET(0xB77B130)
#define CLASS_1_37CFE50712AC363B_GET_OBTAINEDSCOREDETAIL_OFFSET UNITYSDK_OFFSET(0xB77B110)
#define CLASS_1_37CFE50712AC363B_METHOD_1_3BC918499E7F4F22_OFFSET UNITYSDK_OFFSET(0xB77AE80)
#define CLASS_1_37CFE50712AC363B_METHOD_1_9DBCDB16C43BA791_OFFSET UNITYSDK_OFFSET(0xB77AD30)
#define CLASS_1_37CFE50712AC363B_METHOD_1_9FAACC7749D268F3_OFFSET UNITYSDK_OFFSET(0xB77ACA0)
#define CLASS_1_37CFE50712AC363B_METHOD_1_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0xB77AD10)
#define CLASS_1_37CFE50712AC363B_SET_OBTAINEDSCOREDETAIL_OFFSET UNITYSDK_OFFSET(0xB77B120)
#define CLASS_1_37CFE50712AC363B__CTOR_OFFSET UNITYSDK_OFFSET(0xB77B140)

inline static constexpr unsigned int Class_1_37CFE50712AC363B_TypeDefinitionIndex = 74258;

class Class_1_37CFE50712AC363B : public ::System::Object
{
public:
	::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* Field_1_0; // 0x10
	::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B* _ObtainedScoreDetail_k__BackingField; // 0x18
	::System::Boolean _IsSessionFailed_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1, ::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*, ::Class_1_37CFE50712AC363B_Class_1_BC9B4AAFA70E382B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::TextID Method_1_9FAACC7749D268F3()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_METHOD_1_9FAACC7749D268F3_OFFSET))(this);
	}

	::System::Boolean Method_1_E639AC66E23A9DAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_METHOD_1_E639AC66E23A9DAF_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_9DBCDB16C43BA791()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_METHOD_1_9DBCDB16C43BA791_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_3BC918499E7F4F22()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37CFE50712AC363B_METHOD_1_3BC918499E7F4F22_OFFSET))(this);
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
