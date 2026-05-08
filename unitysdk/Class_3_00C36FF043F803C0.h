#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5DEDFEEF9AEFA7B0.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIViewModelReference; }

#define CLASS_3_00C36FF043F803C0_CLEAN_OFFSET UNITYSDK_OFFSET(0xD463440)
#define CLASS_3_00C36FF043F803C0_METHOD_3_072BC662B7D13155_OFFSET UNITYSDK_OFFSET(0xD4635B0)
#define CLASS_3_00C36FF043F803C0_METHOD_3_20B02730B7723D92_OFFSET UNITYSDK_OFFSET(0xD463630)
#define CLASS_3_00C36FF043F803C0_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xD463620)
#define CLASS_3_00C36FF043F803C0__CCTOR_OFFSET UNITYSDK_OFFSET(0xD463510)
#define CLASS_3_00C36FF043F803C0__CTOR_OFFSET UNITYSDK_OFFSET(0xD463500)

inline static constexpr unsigned int Class_3_00C36FF043F803C0_TypeDefinitionIndex = 62715;

class Class_3_00C36FF043F803C0 : public ::Class_2_5DEDFEEF9AEFA7B0
{
public:
	static ::Foundation::ObjectPool_1<::Class_3_00C36FF043F803C0*>** StaticGet_Field_3_0()
	{
		return (::Foundation::ObjectPool_1<::Class_3_00C36FF043F803C0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_00C36FF043F803C0_TypeDefinitionIndex)->GetStaticField(0x48C30);
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

	static ::Class_3_00C36FF043F803C0* Method_3_072BC662B7D13155()
	{
		return ((::Class_3_00C36FF043F803C0*(*)())((::PBYTE)hIl2Cpp + CLASS_3_00C36FF043F803C0_METHOD_3_072BC662B7D13155_OFFSET))();
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00C36FF043F803C0_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	static ::Class_3_00C36FF043F803C0* Method_3_20B02730B7723D92(::MoleMole::UIViewModelReference* a1)
	{
		return ((::Class_3_00C36FF043F803C0*(*)(::MoleMole::UIViewModelReference*))((::PBYTE)hIl2Cpp + CLASS_3_00C36FF043F803C0_METHOD_3_20B02730B7723D92_OFFSET))(a1);
	}
};
