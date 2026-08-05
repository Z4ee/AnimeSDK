#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5DEDFEEF9AEFA7B0.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIViewModelReference; }

#define CLASS_3_00C36FF043F803C0_CLEAN_OFFSET UNITYSDK_OFFSET(0x161C4060)
#define CLASS_3_00C36FF043F803C0_METHOD_3_072BC662B7D13155_OFFSET UNITYSDK_OFFSET(0x161C42B0)
#define CLASS_3_00C36FF043F803C0_METHOD_3_20B02730B7723D92_OFFSET UNITYSDK_OFFSET(0x161C41E0)
#define CLASS_3_00C36FF043F803C0_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x161C41D0)
#define CLASS_3_00C36FF043F803C0__CCTOR_OFFSET UNITYSDK_OFFSET(0x161C4130)
#define CLASS_3_00C36FF043F803C0__CTOR_OFFSET UNITYSDK_OFFSET(0x161C4120)

inline static constexpr unsigned int Class_3_00C36FF043F803C0_TypeDefinitionIndex = 70963;

class Class_3_00C36FF043F803C0 : public ::Class_2_5DEDFEEF9AEFA7B0
{
public:
	static ::Foundation::ObjectPool_1<::Class_3_00C36FF043F803C0*>** StaticGet_Field_3_0()
	{
		return (::Foundation::ObjectPool_1<::Class_3_00C36FF043F803C0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_00C36FF043F803C0_TypeDefinitionIndex)->GetStaticField(0x460A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00C36FF043F803C0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_00C36FF043F803C0__CCTOR_OFFSET))();
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00C36FF043F803C0_CLEAN_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00C36FF043F803C0_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	static ::Class_3_00C36FF043F803C0* Method_3_20B02730B7723D92(::MoleMole::UIViewModelReference* a1)
	{
		return ((::Class_3_00C36FF043F803C0*(*)(::MoleMole::UIViewModelReference*))((::PBYTE)hIl2Cpp + CLASS_3_00C36FF043F803C0_METHOD_3_20B02730B7723D92_OFFSET))(a1);
	}

	static ::Class_3_00C36FF043F803C0* Method_3_072BC662B7D13155()
	{
		return ((::Class_3_00C36FF043F803C0*(*)())((::PBYTE)hIl2Cpp + CLASS_3_00C36FF043F803C0_METHOD_3_072BC662B7D13155_OFFSET))();
	}
};
