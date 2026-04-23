#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173E3770)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173E37B0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__GETGOODSIDLIST_B__20_0_OFFSET UNITYSDK_OFFSET(0x173E37C0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__GETGOODSIDLIST_B__20_1_OFFSET UNITYSDK_OFFSET(0x173E38E0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int ThirdpartyStore___c_TypeDefinitionIndex = 7611;

	class ThirdpartyStore___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Base::GoodsPlatform::ThirdpartyStore___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Base::GoodsPlatform::ThirdpartyStore___c**)Il2CppClass::FromTypeDefinitionIndex(ThirdpartyStore___c_TypeDefinitionIndex)->GetStaticField(0x16F80);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__20_1()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ThirdpartyStore___c_TypeDefinitionIndex)->GetStaticField(0x16F88);
		}
		static ::System::Func_2<::MiHoYo::SDK::JSONNode*, ::System::String*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::MiHoYo::SDK::JSONNode*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ThirdpartyStore___c_TypeDefinitionIndex)->GetStaticField(0x16F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetGoodsIdList_b__20_0(::MiHoYo::SDK::JSONNode* x)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__GETGOODSIDLIST_B__20_0_OFFSET))(this, x);
		}

		::System::Boolean _GetGoodsIdList_b__20_1(::System::String* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__GETGOODSIDLIST_B__20_1_OFFSET))(this, x);
		}
	};
}
