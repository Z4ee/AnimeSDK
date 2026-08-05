#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0BE87BAA5B57AD70.h"
#include "unitysdk/Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_333D68058B10D010.h"
#include "unitysdk/Struct_2_93287567E916A51C.h"

class Class_1_2B9207E1BEA1F276;
class Class_1_BE29B49AC03370B6;
namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_3C987CFB39F6BA49_METHOD_2_32F5D0F626AEC604_1_OFFSET UNITYSDK_OFFSET(0x1E34D890)
#define CLASS_2_3C987CFB39F6BA49_METHOD_2_32F5D0F626AEC604_OFFSET UNITYSDK_OFFSET(0x1E34D750)
#define CLASS_2_3C987CFB39F6BA49_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x1E34D4B0)
#define CLASS_2_3C987CFB39F6BA49_METHOD_2_8C493CF3FB33E7A6_OFFSET UNITYSDK_OFFSET(0x1E34D630)
#define CLASS_2_3C987CFB39F6BA49_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1E34D9D0)
#define CLASS_2_3C987CFB39F6BA49__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E34D430)
#define CLASS_2_3C987CFB39F6BA49__CTOR_OFFSET UNITYSDK_OFFSET(0x1E34D400)

inline static constexpr unsigned int Class_2_3C987CFB39F6BA49_TypeDefinitionIndex = 89435;

class Class_2_3C987CFB39F6BA49 : public ::Class_1_0BE87BAA5B57AD70
{
public:
	::Class_1_2B9207E1BEA1F276* Field_2_0; // 0x20
	::MoleMole::UICinemaPlayPageController* Field_2_1; // 0x28

	::System::Void _ctor(::MoleMole::UICinemaPlayPageController* a1, ::Class_1_2B9207E1BEA1F276* a2, ::System::Int32 a3, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaPlayPageController*, ::Class_1_2B9207E1BEA1F276*, ::System::Int32, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83))((::PBYTE)hIl2Cpp + CLASS_2_3C987CFB39F6BA49__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::MoleMole::UICinemaPlayPageController* a1, ::Class_1_2B9207E1BEA1F276* a2, ::System::String* a3, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83 a4, ::MoleMole::EntityHandle a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaPlayPageController*, ::Class_1_2B9207E1BEA1F276*, ::System::String*, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_3C987CFB39F6BA49__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_2_3C987CFB39F6BA49_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C493CF3FB33E7A6(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_3C987CFB39F6BA49_METHOD_2_8C493CF3FB33E7A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_32F5D0F626AEC604(::Foundation::ViewObject::ViewObjectHandle a1, ::Struct_2_93287567E916A51C a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Struct_2_93287567E916A51C))((::PBYTE)hIl2Cpp + CLASS_2_3C987CFB39F6BA49_METHOD_2_32F5D0F626AEC604_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_32F5D0F626AEC604_1(::Foundation::ViewObject::ViewObjectHandle a1, ::Struct_2_333D68058B10D010 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Struct_2_333D68058B10D010))((::PBYTE)hIl2Cpp + CLASS_2_3C987CFB39F6BA49_METHOD_2_32F5D0F626AEC604_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_2_3C987CFB39F6BA49_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
