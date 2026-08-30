#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_3EB6D13BCFBCDBBC;
class Class_1_6D3D3983B9CFA0F3;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3AB0B9DDFA5DEB99_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x160A3C00)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x160A2DC0)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x160A2F10)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_2BE12336148ACB2C_OFFSET UNITYSDK_OFFSET(0x160A37C0)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x160A34B0)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_401BE3805398F83E_OFFSET UNITYSDK_OFFSET(0x160A3540)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_44C1AB1F93998C01_OFFSET UNITYSDK_OFFSET(0x160A28D0)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_4972B4CF1E9A3BDE_OFFSET UNITYSDK_OFFSET(0x160A2AE0)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_749CF19CC88BC46F_OFFSET UNITYSDK_OFFSET(0x160A33D0)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_7D4AF0CE269F00BD_OFFSET UNITYSDK_OFFSET(0x160A3890)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_960E1168821CD921_1_OFFSET UNITYSDK_OFFSET(0x160A3230)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_960E1168821CD921_OFFSET UNITYSDK_OFFSET(0x160A3170)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_9F10A8646FBDBE96_OFFSET UNITYSDK_OFFSET(0x160A32F0)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x160A3040)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_AFF78E9477630E0C_OFFSET UNITYSDK_OFFSET(0x160A36F0)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_B4A91A4ACDF9D75F_OFFSET UNITYSDK_OFFSET(0x160A3C20)
#define CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_D875B2D7328A410C_OFFSET UNITYSDK_OFFSET(0x160A3A50)
#define CLASS_2_3AB0B9DDFA5DEB99_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x160A3C10)
#define CLASS_2_3AB0B9DDFA5DEB99__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x160A27F0)
#define CLASS_2_3AB0B9DDFA5DEB99__CTOR_OFFSET UNITYSDK_OFFSET(0x160A3CA0)

inline static constexpr unsigned int Class_2_3AB0B9DDFA5DEB99_TypeDefinitionIndex = 64300;

class Class_2_3AB0B9DDFA5DEB99 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D3D3983B9CFA0F3*>* KIKILAIHAPF; // 0x10
	::System::Boolean _IsPause_k__BackingField; // 0x18
	::System::Int32 NJIBJJCKLOL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99__CTOR_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_44C1AB1F93998C01(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_44C1AB1F93998C01_OFFSET))(this, a1);
	}

	::System::Void Method_2_4972B4CF1E9A3BDE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_4972B4CF1E9A3BDE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_960E1168821CD921(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_960E1168821CD921_OFFSET))(this, a1);
	}

	::System::Void Method_2_960E1168821CD921_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_960E1168821CD921_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F10A8646FBDBE96(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_9F10A8646FBDBE96_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_749CF19CC88BC46F(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_749CF19CC88BC46F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_389486378BEF2498_OFFSET))(this, a1);
	}

	::Class_1_6D3D3983B9CFA0F3* Method_2_401BE3805398F83E(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Single a4, ::System::Int32 a5, ::System::Single a6, ::System::Int32 a7)
	{
		return ((::Class_1_6D3D3983B9CFA0F3*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_401BE3805398F83E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_AFF78E9477630E0C(::System::UInt32 a1, ::Class_1_3EB6D13BCFBCDBBC* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_3EB6D13BCFBCDBBC*))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_AFF78E9477630E0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2BE12336148ACB2C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_2BE12336148ACB2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7D4AF0CE269F00BD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_7D4AF0CE269F00BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_D875B2D7328A410C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_D875B2D7328A410C_OFFSET))(this);
	}

	::System::Boolean get_IsPause()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_GET_ISPAUSE_OFFSET))(this);
	}

	::System::Void set_IsPause(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_SET_ISPAUSE_OFFSET))(this, a1);
	}

	static ::Class_2_3AB0B9DDFA5DEB99* Method_2_B4A91A4ACDF9D75F()
	{
		return ((::Class_2_3AB0B9DDFA5DEB99*(*)())((::PBYTE)hIl2Cpp + CLASS_2_3AB0B9DDFA5DEB99_METHOD_2_B4A91A4ACDF9D75F_OFFSET))();
	}
};
