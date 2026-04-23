#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_1958EDD0843A6E37.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_9;
class Class_1_AEB553DB263EED70;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_77C65DE2662167B9_METHOD_1_04CA3B9D4C1DB0B4_OFFSET UNITYSDK_OFFSET(0x1852FE20)
#define CLASS_1_77C65DE2662167B9_METHOD_1_19C0C525F1DD5057_OFFSET UNITYSDK_OFFSET(0x1852FC10)
#define CLASS_1_77C65DE2662167B9_METHOD_1_336B1AE4C9F6D9CC_OFFSET UNITYSDK_OFFSET(0x1852EF90)
#define CLASS_1_77C65DE2662167B9_METHOD_1_379D328A35D133D8_OFFSET UNITYSDK_OFFSET(0x1852FCF0)
#define CLASS_1_77C65DE2662167B9_METHOD_1_39BD6F39678F30EF_OFFSET UNITYSDK_OFFSET(0x1852FE00)
#define CLASS_1_77C65DE2662167B9_METHOD_1_4E9EE3517723C517_OFFSET UNITYSDK_OFFSET(0x1852EE90)
#define CLASS_1_77C65DE2662167B9_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1852FF60)
#define CLASS_1_77C65DE2662167B9_METHOD_1_A20B0DD2EE049153_OFFSET UNITYSDK_OFFSET(0x1852FBF0)
#define CLASS_1_77C65DE2662167B9_METHOD_1_C2D0E8ACE597126E_OFFSET UNITYSDK_OFFSET(0x1852FE30)
#define CLASS_1_77C65DE2662167B9_METHOD_1_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x1852FC60)
#define CLASS_1_77C65DE2662167B9_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x1852FD10)
#define CLASS_1_77C65DE2662167B9_METHOD_1_FC380757D0D59A76_OFFSET UNITYSDK_OFFSET(0x1852FDA0)
#define CLASS_1_77C65DE2662167B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1852EE30)

inline static constexpr unsigned int Class_1_77C65DE2662167B9_TypeDefinitionIndex = 10050;

class Class_1_77C65DE2662167B9 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::RPG::GameCore::FixPoint>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_AEB553DB263EED70*>* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_9* Field_1_0; // 0x20
	::Struct_2_1958EDD0843A6E37 Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x40
	::System::Int32 Field_1_2; // 0x44

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E9EE3517723C517(::System::String* a1, ::System::Func_2<::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_2<::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_4E9EE3517723C517_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_336B1AE4C9F6D9CC(::Struct_2_1958EDD0843A6E37 a1, ::Class_0_16E4307DCC419505_9* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Struct_2_1958EDD0843A6E37, ::Class_0_16E4307DCC419505_9*))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_336B1AE4C9F6D9CC_OFFSET))(this, a1, a2);
	}

	::System::Byte Method_1_19C0C525F1DD5057()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_19C0C525F1DD5057_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_379D328A35D133D8(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_379D328A35D133D8_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_39BD6F39678F30EF()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_39BD6F39678F30EF_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_04CA3B9D4C1DB0B4(::System::Int32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_04CA3B9D4C1DB0B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2D0E8ACE597126E(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_C2D0E8ACE597126E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_FC380757D0D59A76(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_FC380757D0D59A76_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_A20B0DD2EE049153(::Struct_2_1958EDD0843A6E37 a1, ::Class_0_16E4307DCC419505_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1958EDD0843A6E37, ::Class_0_16E4307DCC419505_9*))((::PBYTE)hIl2Cpp + CLASS_1_77C65DE2662167B9_METHOD_1_A20B0DD2EE049153_OFFSET))(this, a1, a2);
	}
};
