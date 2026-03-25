#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x893C8D0)
#define CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_36F6FA1B3FA08C93_OFFSET UNITYSDK_OFFSET(0x893C9F0)
#define CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_38E53E27B88E4775_OFFSET UNITYSDK_OFFSET(0x893C9B0)
#define CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_494F5598440C8913_OFFSET UNITYSDK_OFFSET(0x893C6B0)
#define CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_6881F21579965504_OFFSET UNITYSDK_OFFSET(0x893CA30)
#define CLASS_1_FBFD3B80A9E5E8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x893CC80)

inline static constexpr unsigned int Class_1_FBFD3B80A9E5E8A6_TypeDefinitionIndex = 64185;

class Class_1_FBFD3B80A9E5E8A6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFD3B80A9E5E8A6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Method_1_494F5598440C8913()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_494F5598440C8913_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* Method_1_38E53E27B88E4775()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_38E53E27B88E4775_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Method_1_36F6FA1B3FA08C93()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_36F6FA1B3FA08C93_OFFSET))(this);
	}

	::System::Int32 Method_1_6881F21579965504(::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBFD3B80A9E5E8A6_METHOD_1_6881F21579965504_OFFSET))(this, a1);
	}
};
