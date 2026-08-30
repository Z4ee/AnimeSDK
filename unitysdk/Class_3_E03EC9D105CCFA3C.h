#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_71ECD705C8627A9D.h"

class Class_1_1C30CE192ABE4C54;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_E03EC9D105CCFA3C_METHOD_3_057B5EC87EDA3AF9_OFFSET UNITYSDK_OFFSET(0x155D2D90)
#define CLASS_3_E03EC9D105CCFA3C_METHOD_3_E5ACF0C291B499EB_OFFSET UNITYSDK_OFFSET(0x155D2E00)
#define CLASS_3_E03EC9D105CCFA3C__CTOR_OFFSET UNITYSDK_OFFSET(0x155D3040)

inline static constexpr unsigned int Class_3_E03EC9D105CCFA3C_TypeDefinitionIndex = 57716;

class Class_3_E03EC9D105CCFA3C : public ::Class_2_71ECD705C8627A9D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E03EC9D105CCFA3C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_057B5EC87EDA3AF9(::Class_1_1C30CE192ABE4C54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + CLASS_3_E03EC9D105CCFA3C_METHOD_3_057B5EC87EDA3AF9_OFFSET))(this, a1);
	}

	::System::Void Method_3_E5ACF0C291B499EB(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_E03EC9D105CCFA3C_METHOD_3_E5ACF0C291B499EB_OFFSET))(this, a1);
	}
};
