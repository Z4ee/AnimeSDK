#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_386D61DA33668FFE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x890AF40)
#define CLASS_1_386D61DA33668FFE_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x890AF50)
#define CLASS_1_386D61DA33668FFE_METHOD_1_AC3D041EA6F5D8CC_OFFSET UNITYSDK_OFFSET(0x890AB30)
#define CLASS_1_386D61DA33668FFE__CTOR_OFFSET UNITYSDK_OFFSET(0x890AAF0)
#define CLASS_1_386D61DA33668FFE__GET_ISSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x890AFF0)

inline static constexpr unsigned int Class_1_386D61DA33668FFE_TypeDefinitionIndex = 53165;

class Class_1_386D61DA33668FFE : public ::System::Object
{
public:
	::RPG::Client::GridFightTrait* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AC3D041EA6F5D8CC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE_METHOD_1_AC3D041EA6F5D8CC_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE_GET_ISSHOW_OFFSET))(this);
	}

	::System::Boolean _get_IsShow_b__5_0(::System::UInt32 x)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE__GET_ISSHOW_B__5_0_OFFSET))(this, x);
	}
};
