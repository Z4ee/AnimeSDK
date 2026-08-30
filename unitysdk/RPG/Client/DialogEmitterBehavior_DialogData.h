#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DialogEmitterBehavior_AlignmentMode.h"
#include "unitysdk/RPG/Client/DialogEmitterBehavior_ContentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_IFCONTENTCHANGED_OFFSET UNITYSDK_OFFSET(0xCCA7E80)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_IFTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xCCA7E60)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_INDEXLIST_OFFSET UNITYSDK_OFFSET(0xCCA5AC0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_OFFSETSCALELIST_OFFSET UNITYSDK_OFFSET(0xCCA5B60)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_PATTERNCOUNT_OFFSET UNITYSDK_OFFSET(0xCCA7ED0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_STRIPRECT_OFFSET UNITYSDK_OFFSET(0xCCA7EA0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_UVRECTLIST_OFFSET UNITYSDK_OFFSET(0xCCA5C00)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xCCA7FA0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_B741B463286E5EDA_OFFSET UNITYSDK_OFFSET(0xCCA7EF0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_IFCONTENTCHANGED_OFFSET UNITYSDK_OFFSET(0xCCA7E90)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_IFTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xCCA7E70)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_INDEXLIST_OFFSET UNITYSDK_OFFSET(0xCCA7EC0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_PATTERNCOUNT_OFFSET UNITYSDK_OFFSET(0xCCA7EE0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_STRIPRECT_OFFSET UNITYSDK_OFFSET(0xCCA7EB0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCCA7FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterBehavior_DialogData_TypeDefinitionIndex = 70850;

	class DialogEmitterBehavior_DialogData : public ::System::Object
	{
	public:
		::RPG::Client::DialogEmitterBehavior_ContentType Type; // 0x10
		::System::String* ContentText; // 0x18
		::UnityEngine::Vector3 CustomPos; // 0x20
		::UnityEngine::Quaternion CustomRotation; // 0x2C
		::UnityEngine::Vector3 CustomScale; // 0x3C
		::System::Int32 BackboardID; // 0x48
		::RPG::Client::DialogEmitterBehavior_AlignmentMode Alignment; // 0x4C
		::UnityEngine::Color Color; // 0x50
		::System::Boolean IfOverrideAlignment; // 0x60
		::System::Boolean IfOverrideType; // 0x61
		::System::Boolean IfOverrideTextColor; // 0x62
		::System::Boolean IfUseBackboard; // 0x63
		::System::Boolean IfUseCustomTransform; // 0x64
		::System::Collections::Generic::List_1<::System::Int32>* _IndexList; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _UVRectList; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _OffsetScaleList; // 0x78
		::System::Boolean _IfTransformChanged_k__BackingField; // 0x80
		::System::Boolean _IfContentChanged_k__BackingField; // 0x81
		::UnityEngine::Rect _StripRect_k__BackingField; // 0x84
		::System::Int32 _PatternCount_k__BackingField; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IfTransformChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_IFTRANSFORMCHANGED_OFFSET))(this);
		}

		::System::Void set_IfTransformChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_IFTRANSFORMCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_IfContentChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_IFCONTENTCHANGED_OFFSET))(this);
		}

		::System::Void set_IfContentChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_IFCONTENTCHANGED_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_StripRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_STRIPRECT_OFFSET))(this);
		}

		::System::Void set_StripRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_STRIPRECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_IndexList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_INDEXLIST_OFFSET))(this);
		}

		::System::Void set_IndexList(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_INDEXLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_UVRectList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_UVRECTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_OffsetScaleList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_OFFSETSCALELIST_OFFSET))(this);
		}

		::System::Int32 get_PatternCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_PATTERNCOUNT_OFFSET))(this);
		}

		::System::Void set_PatternCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_PATTERNCOUNT_OFFSET))(this, a1);
		}

		::System::Void Method_1_B741B463286E5EDA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_B741B463286E5EDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
		}
	};
}
