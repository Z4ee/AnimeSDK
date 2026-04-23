#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9AF2C98415856148_Struct_2_1D20C1B2864CD8BE.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_420;
class Class_0_16E4307DCC419505_421;
class Class_1_98133438BFCB56ED;
class Class_1_E7BD46EB43F1A06F;
class Class_2_C52C76314ACF90D3;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9AF2C98415856148_CLEAR_OFFSET UNITYSDK_OFFSET(0x9709DE0)
#define CLASS_1_9AF2C98415856148_METHOD_1_0F43B59E3B7133BF_OFFSET UNITYSDK_OFFSET(0x970A210)
#define CLASS_1_9AF2C98415856148_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x970A8E0)
#define CLASS_1_9AF2C98415856148_METHOD_1_181A405363C9A19F_OFFSET UNITYSDK_OFFSET(0x970A8F0)
#define CLASS_1_9AF2C98415856148_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x970A900)
#define CLASS_1_9AF2C98415856148_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x970A8D0)
#define CLASS_1_9AF2C98415856148_METHOD_1_51F2DCCD7A5F67B5_OFFSET UNITYSDK_OFFSET(0x9709F20)
#define CLASS_1_9AF2C98415856148_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x970A0E0)
#define CLASS_1_9AF2C98415856148_METHOD_1_8C4121B64D1B4C8A_OFFSET UNITYSDK_OFFSET(0x970A320)
#define CLASS_1_9AF2C98415856148_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x970A670)
#define CLASS_1_9AF2C98415856148_METHOD_1_E4DC9B9DE5C07306_OFFSET UNITYSDK_OFFSET(0x970A7D0)
#define CLASS_1_9AF2C98415856148_METHOD_1_F0877E87A4F0ED7D_OFFSET UNITYSDK_OFFSET(0x970A6B0)
#define CLASS_1_9AF2C98415856148__CTOR_OFFSET UNITYSDK_OFFSET(0x970A910)

inline static constexpr unsigned int Class_1_9AF2C98415856148_TypeDefinitionIndex = 49767;

class Class_1_9AF2C98415856148 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9AF2C98415856148_Struct_2_1D20C1B2864CD8BE>* Field_1_8; // 0x10
	::Class_1_98133438BFCB56ED* Field_1_3; // 0x18
	::Class_0_16E4307DCC419505_421* Field_1_5; // 0x20
	::System::String* Field_1_1; // 0x28
	::Class_0_16E4307DCC419505_420* Field_1_4; // 0x30
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_1_2; // 0x38
	::Class_2_C52C76314ACF90D3* Field_1_0; // 0x40
	::RPG::GameCore::FixPoint Field_1_6; // 0x48
	::RPG::GameCore::FixPoint Field_1_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_51F2DCCD7A5F67B5(::Class_2_C52C76314ACF90D3* a1, ::System::UInt32 a2, ::Class_0_16E4307DCC419505_397* a3, ::Class_0_16E4307DCC419505_420* a4, ::Class_0_16E4307DCC419505_421* a5, ::RPG::GameCore::FixPoint a6, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C52C76314ACF90D3*, ::System::UInt32, ::Class_0_16E4307DCC419505_397*, ::Class_0_16E4307DCC419505_420*, ::Class_0_16E4307DCC419505_421*, ::RPG::GameCore::FixPoint, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_51F2DCCD7A5F67B5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_98133438BFCB56ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F43B59E3B7133BF(::Class_1_98133438BFCB56ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_0F43B59E3B7133BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4121B64D1B4C8A(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_8C4121B64D1B4C8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0877E87A4F0ED7D(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_F0877E87A4F0ED7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E4DC9B9DE5C07306(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_E4DC9B9DE5C07306_OFFSET))(this, a1);
	}

	::Class_2_C52C76314ACF90D3* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_C52C76314ACF90D3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Method_1_181A405363C9A19F()
	{
		return ((::Il2CppArray<::RPG::GameCore::JsonEnum*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_181A405363C9A19F_OFFSET))(this);
	}

	::Class_1_98133438BFCB56ED* Method_1_24748FC20F375725()
	{
		return ((::Class_1_98133438BFCB56ED*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AF2C98415856148_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
