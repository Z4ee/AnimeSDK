#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4A8AFFD349E7E03A_CLASS_1_8F399CA7D30DDBAF_METHOD_1_F22763D742AF5E6F_OFFSET UNITYSDK_OFFSET(0xF975100)
#define CLASS_2_4A8AFFD349E7E03A_CLASS_1_8F399CA7D30DDBAF__CTOR_OFFSET UNITYSDK_OFFSET(0xF9750F0)

inline static constexpr unsigned int Class_2_4A8AFFD349E7E03A_Class_1_8F399CA7D30DDBAF_TypeDefinitionIndex = 62392;

class Class_2_4A8AFFD349E7E03A_Class_1_8F399CA7D30DDBAF : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A8AFFD349E7E03A_CLASS_1_8F399CA7D30DDBAF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F22763D742AF5E6F(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_2_4A8AFFD349E7E03A_CLASS_1_8F399CA7D30DDBAF_METHOD_1_F22763D742AF5E6F_OFFSET))(this, a1);
	}
};
