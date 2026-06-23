#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_941A638742843CB5_CLASS_1_D347D24041774D2D_METHOD_1_5EE047E48143A8CA_OFFSET UNITYSDK_OFFSET(0x11D47040)
#define CLASS_2_941A638742843CB5_CLASS_1_D347D24041774D2D__CTOR_OFFSET UNITYSDK_OFFSET(0x11D47130)

inline static constexpr unsigned int Class_2_941A638742843CB5_Class_1_D347D24041774D2D_TypeDefinitionIndex = 65231;

class Class_2_941A638742843CB5_Class_1_D347D24041774D2D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_2; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_941A638742843CB5_CLASS_1_D347D24041774D2D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5EE047E48143A8CA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_941A638742843CB5_CLASS_1_D347D24041774D2D_METHOD_1_5EE047E48143A8CA_OFFSET))(this, a1);
	}
};
