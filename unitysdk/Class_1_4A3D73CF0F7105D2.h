#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4A3D73CF0F7105D2_METHOD_1_0264846CD9FCD385_OFFSET UNITYSDK_OFFSET(0xA7C5D80)
#define CLASS_1_4A3D73CF0F7105D2_METHOD_1_185D0CAE46707310_OFFSET UNITYSDK_OFFSET(0xA7C58F0)
#define CLASS_1_4A3D73CF0F7105D2_METHOD_1_2A148DA74006E2C6_OFFSET UNITYSDK_OFFSET(0xA7975F0)
#define CLASS_1_4A3D73CF0F7105D2_METHOD_1_8DDC802F41655B29_OFFSET UNITYSDK_OFFSET(0xA7C5D30)

inline static constexpr unsigned int Class_1_4A3D73CF0F7105D2_TypeDefinitionIndex = 58368;

class Class_1_4A3D73CF0F7105D2 : public ::System::Object
{
public:
	static ::System::String* Method_1_185D0CAE46707310(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::String*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_4A3D73CF0F7105D2_METHOD_1_185D0CAE46707310_OFFSET))(a1);
	}

	static ::System::Void Method_1_2A148DA74006E2C6(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A3D73CF0F7105D2_METHOD_1_2A148DA74006E2C6_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector2Int Method_1_0264846CD9FCD385(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector2Int(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A3D73CF0F7105D2_METHOD_1_0264846CD9FCD385_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8DDC802F41655B29(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4A3D73CF0F7105D2_METHOD_1_8DDC802F41655B29_OFFSET))(a1, a2);
	}
};
