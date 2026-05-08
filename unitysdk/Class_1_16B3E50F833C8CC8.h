#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_16B3E50F833C8CC8_METHOD_1_85E657E328490B3B_OFFSET UNITYSDK_OFFSET(0x10B5B980)
#define CLASS_1_16B3E50F833C8CC8_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x10B5B9E0)
#define CLASS_1_16B3E50F833C8CC8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10B5B3B0)
#define CLASS_1_16B3E50F833C8CC8__CTOR_2_OFFSET UNITYSDK_OFFSET(0x10B5B520)
#define CLASS_1_16B3E50F833C8CC8__CTOR_3_OFFSET UNITYSDK_OFFSET(0x10B5B6A0)
#define CLASS_1_16B3E50F833C8CC8__CTOR_4_OFFSET UNITYSDK_OFFSET(0x10B5B810)
#define CLASS_1_16B3E50F833C8CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x10B5B320)

inline static constexpr unsigned int Class_1_16B3E50F833C8CC8_TypeDefinitionIndex = 54560;

class Class_1_16B3E50F833C8CC8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeGraph::VariantUnion>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::NodeGraph::VariantUnion>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16B3E50F833C8CC8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_16B3E50F833C8CC8__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_16B3E50F833C8CC8__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16B3E50F833C8CC8__CTOR_3_OFFSET))(this, a1);
	}

	::System::Void _ctor_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_16B3E50F833C8CC8__CTOR_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_85E657E328490B3B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_16B3E50F833C8CC8_METHOD_1_85E657E328490B3B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16B3E50F833C8CC8_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};
