#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F84162D45373F557_UIElementType.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_AB817CB39E494C61;
class Class_1_ABFB5B7BFEBBC8F7;
class Class_1_F84162D45373F557_Class_1_880304D4E9A590C8;
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_A7B39FA675637A9F_METHOD_1_3629B07C29EB12BE_OFFSET UNITYSDK_OFFSET(0x15201680)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_3A366F6A20FCD03B_1_OFFSET UNITYSDK_OFFSET(0x15200C30)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_3A366F6A20FCD03B_OFFSET UNITYSDK_OFFSET(0x15200AF0)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_6AFB4A70E927BC80_OFFSET UNITYSDK_OFFSET(0x15200DD0)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_BDEC96DEF49D33C7_OFFSET UNITYSDK_OFFSET(0x15201A80)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_C86CA48475AE1200_OFFSET UNITYSDK_OFFSET(0x15201910)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_D270672DFFC3BBB8_OFFSET UNITYSDK_OFFSET(0x152008A0)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x15201BB0)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_FB5A677A86C2D664_OFFSET UNITYSDK_OFFSET(0x15201150)
#define CLASS_1_A7B39FA675637A9F__CTOR_OFFSET UNITYSDK_OFFSET(0x15201BE0)

inline static constexpr unsigned int Class_1_A7B39FA675637A9F_TypeDefinitionIndex = 57188;

class Class_1_A7B39FA675637A9F : public ::System::Object
{
public:
	::RPG::Client::CloudUIBattlePosRegion Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*>* Method_1_D270672DFFC3BBB8(::RPG::Client::CloudUIPosReporterMono* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_D270672DFFC3BBB8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3A366F6A20FCD03B(::UnityEngine::RectTransform* a1, ::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*&))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_3A366F6A20FCD03B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3A366F6A20FCD03B_1(::UnityEngine::RectTransform* a1, ::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*&))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_3A366F6A20FCD03B_1_OFFSET))(this, a1, a2);
	}

	::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8* Method_1_FB5A677A86C2D664(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Class_1_F84162D45373F557_UIElementType a4)
	{
		return ((::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_F84162D45373F557_UIElementType))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_FB5A677A86C2D664_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::UnityEngine::Vector2> Method_1_6AFB4A70E927BC80()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_6AFB4A70E927BC80_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector2> Method_1_3629B07C29EB12BE()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_3629B07C29EB12BE_OFFSET))(this);
	}

	::Class_1_AB817CB39E494C61* Method_1_C86CA48475AE1200()
	{
		return ((::Class_1_AB817CB39E494C61*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_C86CA48475AE1200_OFFSET))(this);
	}

	::Class_1_ABFB5B7BFEBBC8F7* Method_1_BDEC96DEF49D33C7()
	{
		return ((::Class_1_ABFB5B7BFEBBC8F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_BDEC96DEF49D33C7_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}
};
