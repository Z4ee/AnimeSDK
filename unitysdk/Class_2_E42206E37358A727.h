#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_E42206E37358A727_Enum_3_F45D2DF35A0B4A96.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagQueryExpression.h"

namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E42206E37358A727_METHOD_2_343810D63A31E6A7_OFFSET UNITYSDK_OFFSET(0x11C7FCA0)
#define CLASS_2_E42206E37358A727_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11C7EA10)
#define CLASS_2_E42206E37358A727_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x11C7EA80)
#define CLASS_2_E42206E37358A727_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11C7FD70)
#define CLASS_2_E42206E37358A727_METHOD_2_FD8D08F177ED80AC_OFFSET UNITYSDK_OFFSET(0x11C7FAD0)
#define CLASS_2_E42206E37358A727__CTOR_OFFSET UNITYSDK_OFFSET(0x11C7FAC0)

inline static constexpr unsigned int Class_2_E42206E37358A727_TypeDefinitionIndex = 70093;

class Class_2_E42206E37358A727 : public ::Class_1_BE149A7D6310B037
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Unreal::FGameplayTagQueryExpression>* Field_2_1; // 0x18
	::Class_2_E42206E37358A727_Enum_3_F45D2DF35A0B4A96 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E42206E37358A727__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E42206E37358A727_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_FD8D08F177ED80AC(::System::Int32 a1, ::Foundation::Unreal::FGameplayTagQuery*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagQuery*&))((::PBYTE)hIl2Cpp + CLASS_2_E42206E37358A727_METHOD_2_FD8D08F177ED80AC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_343810D63A31E6A7(::System::Int32 a1, ::Foundation::Unreal::FGameplayTagQueryExpression& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + CLASS_2_E42206E37358A727_METHOD_2_343810D63A31E6A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E42206E37358A727_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E42206E37358A727_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
