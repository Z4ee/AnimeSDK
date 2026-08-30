#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_191322BB8B3BAA37_METHOD_1_12241B483F0CD209_OFFSET UNITYSDK_OFFSET(0x1BFC07C0)
#define CLASS_1_191322BB8B3BAA37_METHOD_1_AF4433C5CD40A9C5_OFFSET UNITYSDK_OFFSET(0x1BFC0970)
#define CLASS_1_191322BB8B3BAA37_METHOD_1_EE7A41C190351096_OFFSET UNITYSDK_OFFSET(0x1BFC0900)
#define CLASS_1_191322BB8B3BAA37__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC07D0)

inline static constexpr unsigned int Class_1_191322BB8B3BAA37_TypeDefinitionIndex = 40209;

class Class_1_191322BB8B3BAA37 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AKBFAFMNKDG; // 0x10
	::Il2CppArray<::System::String*>* MFMILOFFMAC; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_191322BB8B3BAA37__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* Method_1_12241B483F0CD209()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_191322BB8B3BAA37_METHOD_1_12241B483F0CD209_OFFSET))(this);
	}

	::System::String* Method_1_EE7A41C190351096(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_191322BB8B3BAA37_METHOD_1_EE7A41C190351096_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_AF4433C5CD40A9C5(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_191322BB8B3BAA37_METHOD_1_AF4433C5CD40A9C5_OFFSET))(this, a1);
	}
};
