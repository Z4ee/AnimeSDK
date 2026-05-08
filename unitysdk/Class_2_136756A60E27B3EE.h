#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_136756A60E27B3EE_Enum_3_F45D2DF35A0B4A96.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagQueryExpression.h"

namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_136756A60E27B3EE_METHOD_2_1FDB4471B0338763_OFFSET UNITYSDK_OFFSET(0x12CC9430)
#define CLASS_2_136756A60E27B3EE_METHOD_2_343810D63A31E6A7_OFFSET UNITYSDK_OFFSET(0x12CC9360)
#define CLASS_2_136756A60E27B3EE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12CC8230)
#define CLASS_2_136756A60E27B3EE_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x12CC82A0)
#define CLASS_2_136756A60E27B3EE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12CC92D0)
#define CLASS_2_136756A60E27B3EE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CC92C0)

inline static constexpr unsigned int Class_2_136756A60E27B3EE_TypeDefinitionIndex = 60604;

class Class_2_136756A60E27B3EE : public ::Class_1_BE149A7D6310B037
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Unreal::FGameplayTagQueryExpression>* Field_2_0; // 0x18
	::Class_2_136756A60E27B3EE_Enum_3_F45D2DF35A0B4A96 Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_136756A60E27B3EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_136756A60E27B3EE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_136756A60E27B3EE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_343810D63A31E6A7(::System::Int32 a1, ::Foundation::Unreal::FGameplayTagQueryExpression& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + CLASS_2_136756A60E27B3EE_METHOD_2_343810D63A31E6A7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1FDB4471B0338763(::System::Int32 a1, ::Foundation::Unreal::FGameplayTagQuery*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagQuery*&))((::PBYTE)hIl2Cpp + CLASS_2_136756A60E27B3EE_METHOD_2_1FDB4471B0338763_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_136756A60E27B3EE_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}
};
