#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0A972FE8328AB478_CLASS_3_79E6296B04AB77B1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB4AD3A0)
#define CLASS_1_0A972FE8328AB478_CLASS_3_79E6296B04AB77B1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB4AD3E0)
#define CLASS_1_0A972FE8328AB478_CLASS_3_79E6296B04AB77B1_INVOKE_OFFSET UNITYSDK_OFFSET(0xB4AB8B0)
#define CLASS_1_0A972FE8328AB478_CLASS_3_79E6296B04AB77B1__CTOR_OFFSET UNITYSDK_OFFSET(0xB4AD2B0)

inline static constexpr unsigned int Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1_TypeDefinitionIndex = 79455;

class Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_79E6296B04AB77B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_79E6296B04AB77B1_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_79E6296B04AB77B1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_79E6296B04AB77B1_ENDINVOKE_OFFSET))(this, a1);
	}
};
