#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_UGCNETWORK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD97610)
#define MIHOYO_SDK_UGCNETWORK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD97650)
#define MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_0_OFFSET UNITYSDK_OFFSET(0x1AD97660)
#define MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_1_OFFSET UNITYSDK_OFFSET(0x1AD97690)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCNetwork___c_TypeDefinitionIndex = 35277;

	class UGCNetwork___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UGCNetwork___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UGCNetwork___c**)Il2CppClass::FromTypeDefinitionIndex(UGCNetwork___c_TypeDefinitionIndex)->GetStaticField(0x269A0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UGCNetwork___c_TypeDefinitionIndex)->GetStaticField(0x269A8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UGCNetwork___c_TypeDefinitionIndex)->GetStaticField(0x269B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__CTOR_OFFSET))(this);
		}

		::System::String* _PerformHttpRequestBinary_b__6_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> kvp)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_0_OFFSET))(this, kvp);
		}

		::System::String* _PerformHttpRequestBinary_b__6_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> kvp)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK___C__PERFORMHTTPREQUESTBINARY_B__6_1_OFFSET))(this, kvp);
		}
	};
}
