#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C64A90CC94D1A46C_METHOD_1_36F6FA1B3FA08C93_OFFSET UNITYSDK_OFFSET(0x1626CE30)
#define CLASS_1_C64A90CC94D1A46C_METHOD_1_38E53E27B88E4775_OFFSET UNITYSDK_OFFSET(0x1626CDF0)
#define CLASS_1_C64A90CC94D1A46C_METHOD_1_66A26014B24CE992_OFFSET UNITYSDK_OFFSET(0x1626CE70)
#define CLASS_1_C64A90CC94D1A46C_METHOD_1_B287D64AA6B44527_OFFSET UNITYSDK_OFFSET(0x1626CAA0)
#define CLASS_1_C64A90CC94D1A46C_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1626CCF0)
#define CLASS_1_C64A90CC94D1A46C__CTOR_OFFSET UNITYSDK_OFFSET(0x1626D200)

inline static constexpr unsigned int Class_1_C64A90CC94D1A46C_TypeDefinitionIndex = 74779;

class Class_1_C64A90CC94D1A46C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Method_1_B287D64AA6B44527()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_B287D64AA6B44527_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* Method_1_38E53E27B88E4775()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_38E53E27B88E4775_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Method_1_36F6FA1B3FA08C93()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_36F6FA1B3FA08C93_OFFSET))(this);
	}

	::System::Int32 Method_1_66A26014B24CE992(::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_66A26014B24CE992_OFFSET))(this, a1);
	}
};
