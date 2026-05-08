#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A250D2252735266.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92C94994DC41769D_CLASS_3_F9FBE0023F8F7383_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF3D6DB0)
#define CLASS_1_92C94994DC41769D_CLASS_3_F9FBE0023F8F7383_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF3D6E40)
#define CLASS_1_92C94994DC41769D_CLASS_3_F9FBE0023F8F7383_INVOKE_OFFSET UNITYSDK_OFFSET(0xF3D6790)
#define CLASS_1_92C94994DC41769D_CLASS_3_F9FBE0023F8F7383__CTOR_OFFSET UNITYSDK_OFFSET(0xF3D6780)

inline static constexpr unsigned int Class_1_92C94994DC41769D_Class_3_F9FBE0023F8F7383_TypeDefinitionIndex = 81527;

class Class_1_92C94994DC41769D_Class_3_F9FBE0023F8F7383 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_92C94994DC41769D_CLASS_3_F9FBE0023F8F7383__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::IList_1<::Enum_3_3A250D2252735266>* a2, ::Enum_3_3A250D2252735266 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::Enum_3_3A250D2252735266>*, ::Enum_3_3A250D2252735266))((::PBYTE)hIl2Cpp + CLASS_1_92C94994DC41769D_CLASS_3_F9FBE0023F8F7383_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::IList_1<::Enum_3_3A250D2252735266>* a2, ::Enum_3_3A250D2252735266 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::Enum_3_3A250D2252735266>*, ::Enum_3_3A250D2252735266, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_92C94994DC41769D_CLASS_3_F9FBE0023F8F7383_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_92C94994DC41769D_CLASS_3_F9FBE0023F8F7383_ENDINVOKE_OFFSET))(this, a1);
	}
};
