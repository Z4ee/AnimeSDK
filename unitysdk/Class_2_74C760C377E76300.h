#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_3EB6D13BCFBCDBBC;
class Class_1_6D3D3983B9CFA0F3;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_74C760C377E76300_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x8BB9620)
#define CLASS_2_74C760C377E76300_METHOD_2_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x8BB86A0)
#define CLASS_2_74C760C377E76300_METHOD_2_19D820FA43839657_OFFSET UNITYSDK_OFFSET(0x8BB9140)
#define CLASS_2_74C760C377E76300_METHOD_2_232E797F49F86A83_OFFSET UNITYSDK_OFFSET(0x8BB8D90)
#define CLASS_2_74C760C377E76300_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x8BB87F0)
#define CLASS_2_74C760C377E76300_METHOD_2_28E6860D9F77776F_1_OFFSET UNITYSDK_OFFSET(0x8BB8B60)
#define CLASS_2_74C760C377E76300_METHOD_2_28E6860D9F77776F_OFFSET UNITYSDK_OFFSET(0x8BB8A60)
#define CLASS_2_74C760C377E76300_METHOD_2_2BCCA922C4493271_OFFSET UNITYSDK_OFFSET(0x8BB8480)
#define CLASS_2_74C760C377E76300_METHOD_2_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x8BB8EB0)
#define CLASS_2_74C760C377E76300_METHOD_2_4E28DD455C597F10_OFFSET UNITYSDK_OFFSET(0x8BB9260)
#define CLASS_2_74C760C377E76300_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x8BB9640)
#define CLASS_2_74C760C377E76300_METHOD_2_6A6D6FCF91C4C3C7_OFFSET UNITYSDK_OFFSET(0x8BB8F60)
#define CLASS_2_74C760C377E76300_METHOD_2_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x8BB94D0)
#define CLASS_2_74C760C377E76300_METHOD_2_8364D4BF10E74961_OFFSET UNITYSDK_OFFSET(0x8BB9380)
#define CLASS_2_74C760C377E76300_METHOD_2_91B2D23CABF1B84C_OFFSET UNITYSDK_OFFSET(0x8BB82D0)
#define CLASS_2_74C760C377E76300_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x8BB8920)
#define CLASS_2_74C760C377E76300_METHOD_2_CFEA4B5E86222EE5_OFFSET UNITYSDK_OFFSET(0x8BB8C60)
#define CLASS_2_74C760C377E76300_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x8BB9630)
#define CLASS_2_74C760C377E76300__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8BB8230)
#define CLASS_2_74C760C377E76300__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB96A0)
#define CLASS_2_74C760C377E76300___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8BB9730)

inline static constexpr unsigned int Class_2_74C760C377E76300_TypeDefinitionIndex = 52154;

class Class_2_74C760C377E76300 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D3D3983B9CFA0F3*>* Field_2_2; // 0x10
	::System::Boolean _IsPause_k__BackingField; // 0x18
	::System::Int32 Field_2_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300__CTOR_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_91B2D23CABF1B84C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_91B2D23CABF1B84C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2BCCA922C4493271(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_2BCCA922C4493271_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_28E6860D9F77776F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_28E6860D9F77776F_OFFSET))(this, a1);
	}

	::System::Void Method_2_28E6860D9F77776F_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_28E6860D9F77776F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFEA4B5E86222EE5(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_CFEA4B5E86222EE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_232E797F49F86A83(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_232E797F49F86A83_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::Class_1_6D3D3983B9CFA0F3* Method_2_6A6D6FCF91C4C3C7(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Single a4, ::System::Int32 a5, ::System::Single a6, ::System::Int32 a7)
	{
		return ((::Class_1_6D3D3983B9CFA0F3*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_6A6D6FCF91C4C3C7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_19D820FA43839657(::System::UInt32 a1, ::Class_1_3EB6D13BCFBCDBBC* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_3EB6D13BCFBCDBBC*))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_19D820FA43839657_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E28DD455C597F10(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_4E28DD455C597F10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8364D4BF10E74961(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_8364D4BF10E74961_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Boolean get_IsPause()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_GET_ISPAUSE_OFFSET))(this);
	}

	::System::Void set_IsPause(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_SET_ISPAUSE_OFFSET))(this, value);
	}

	static ::Class_2_74C760C377E76300* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_74C760C377E76300*(*)())((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300_METHOD_2_64B6514CFF8F8D76_OFFSET))();
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74C760C377E76300___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
