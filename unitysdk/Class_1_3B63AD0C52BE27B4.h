#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NodeMap; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B63AD0C52BE27B4_METHOD_1_9F3866E5A3B6C214_OFFSET UNITYSDK_OFFSET(0x12BF1AF0)
#define CLASS_1_3B63AD0C52BE27B4_METHOD_1_DCAE6BD7A5AD7DD3_OFFSET UNITYSDK_OFFSET(0x12BF1CF0)

inline static constexpr unsigned int Class_1_3B63AD0C52BE27B4_TypeDefinitionIndex = 69432;

class Class_1_3B63AD0C52BE27B4 : public ::System::Object
{
public:
	static ::System::Void Method_1_9F3866E5A3B6C214(::MoleMole::NodeMap* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::MoleMole::NodeMap*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3B63AD0C52BE27B4_METHOD_1_9F3866E5A3B6C214_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*> Method_1_DCAE6BD7A5AD7DD3(::MoleMole::NodeMap* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*& a3)
	{
		return ((::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*>(*)(::MoleMole::NodeMap*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*&))((::PBYTE)hIl2Cpp + CLASS_1_3B63AD0C52BE27B4_METHOD_1_DCAE6BD7A5AD7DD3_OFFSET))(a1, a2, a3);
	}
};
