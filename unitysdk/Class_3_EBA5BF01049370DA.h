#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_EBA5BF01049370DA_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0xA7B8B30)
#define CLASS_3_EBA5BF01049370DA_METHOD_3_B009EDD65A2C43CD_OFFSET UNITYSDK_OFFSET(0xA7B88C0)
#define CLASS_3_EBA5BF01049370DA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA7B8AA0)
#define CLASS_3_EBA5BF01049370DA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA7B89D0)
#define CLASS_3_EBA5BF01049370DA__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B8B80)
#define CLASS_3_EBA5BF01049370DA___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA7B8BF0)
#define CLASS_3_EBA5BF01049370DA___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA7B8B90)

inline static constexpr unsigned int Class_3_EBA5BF01049370DA_TypeDefinitionIndex = 60618;

class Class_3_EBA5BF01049370DA : public ::Class_2_E408E6D7F3D1822C
{
public:
	::RPG::PoolList_1<::UnityEngine::Vector2Int>* Field_3_1; // 0x28
	::Class_1_1D65C84443DC695F* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA5BF01049370DA__CTOR_OFFSET))(this);
	}

	static ::Class_3_EBA5BF01049370DA* Method_3_B009EDD65A2C43CD(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_EBA5BF01049370DA*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_EBA5BF01049370DA_METHOD_3_B009EDD65A2C43CD_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA5BF01049370DA_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA5BF01049370DA_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA5BF01049370DA_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA5BF01049370DA___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA5BF01049370DA___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
