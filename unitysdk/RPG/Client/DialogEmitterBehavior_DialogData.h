#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DialogEmitterBehavior_AlignmentMode.h"
#include "unitysdk/RPG/Client/DialogEmitterBehavior_ContentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_IFCONTENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA1016E0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_IFTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA1016C0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_INDEXLIST_OFFSET UNITYSDK_OFFSET(0xA1006E0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_OFFSETSCALELIST_OFFSET UNITYSDK_OFFSET(0xA100780)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_PATTERNCOUNT_OFFSET UNITYSDK_OFFSET(0xA101730)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_STRIPRECT_OFFSET UNITYSDK_OFFSET(0xA101700)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_UVRECTLIST_OFFSET UNITYSDK_OFFSET(0xA100820)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xA101800)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_B741B463286E5EDA_OFFSET UNITYSDK_OFFSET(0xA101750)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_IFCONTENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA1016F0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_IFTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA1016D0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_INDEXLIST_OFFSET UNITYSDK_OFFSET(0xA101720)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_PATTERNCOUNT_OFFSET UNITYSDK_OFFSET(0xA101740)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_STRIPRECT_OFFSET UNITYSDK_OFFSET(0xA101710)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA101850)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterBehavior_DialogData_TypeDefinitionIndex = 65348;

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
		::System::Boolean IfOverrideAlignment; // 0x50
		::System::Boolean IfOverrideType; // 0x51
		::System::Boolean IfUseBackboard; // 0x52
		::System::Boolean IfUseCustomTransform; // 0x53
		::System::Collections::Generic::List_1<::System::Int32>* _IndexList; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _UVRectList; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _OffsetScaleList; // 0x68
		::System::Boolean _IfTransformChanged_k__BackingField; // 0x70
		::System::Boolean _IfContentChanged_k__BackingField; // 0x71
		::UnityEngine::Rect _StripRect_k__BackingField; // 0x74
		::System::Int32 _PatternCount_k__BackingField; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IfTransformChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_IFTRANSFORMCHANGED_OFFSET))(this);
		}

		::System::Void set_IfTransformChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_IFTRANSFORMCHANGED_OFFSET))(this, value);
		}

		::System::Boolean get_IfContentChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_IFCONTENTCHANGED_OFFSET))(this);
		}

		::System::Void set_IfContentChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_IFCONTENTCHANGED_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_StripRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_STRIPRECT_OFFSET))(this);
		}

		::System::Void set_StripRect(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_STRIPRECT_OFFSET))(this, value);
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

		::System::Void set_PatternCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_PATTERNCOUNT_OFFSET))(this, value);
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
