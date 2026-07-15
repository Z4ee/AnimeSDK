#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_2_465A9E6CC2B0EF21;
class Class_4_2E0A1A668714B3CC;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_CE48F09631493940_GET_SPAWNBRICKLIST_OFFSET UNITYSDK_OFFSET(0x198E6AA0)
#define CLASS_1_CE48F09631493940_METHOD_1_0456677CD79C183D_OFFSET UNITYSDK_OFFSET(0x198E5AD0)
#define CLASS_1_CE48F09631493940_METHOD_1_17120C903700ED15_OFFSET UNITYSDK_OFFSET(0x198E58C0)
#define CLASS_1_CE48F09631493940_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x198E66B0)
#define CLASS_1_CE48F09631493940_METHOD_1_7496241C47EAB0B8_OFFSET UNITYSDK_OFFSET(0x198E5600)
#define CLASS_1_CE48F09631493940_METHOD_1_AD76C3B16A33D2D3_OFFSET UNITYSDK_OFFSET(0x198E61D0)
#define CLASS_1_CE48F09631493940_METHOD_1_B6E70F1D6F71D0B3_OFFSET UNITYSDK_OFFSET(0x198E5F00)
#define CLASS_1_CE48F09631493940_METHOD_1_C5F10735C9BD56A8_OFFSET UNITYSDK_OFFSET(0x198E6850)
#define CLASS_1_CE48F09631493940_METHOD_1_D05723CC44C9E0C5_OFFSET UNITYSDK_OFFSET(0x198E6970)
#define CLASS_1_CE48F09631493940_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x198E5460)
#define CLASS_1_CE48F09631493940_METHOD_1_DB112C30198629F3_OFFSET UNITYSDK_OFFSET(0x198E5CD0)
#define CLASS_1_CE48F09631493940_METHOD_1_E04373D96F3697CE_OFFSET UNITYSDK_OFFSET(0x198E6710)
#define CLASS_1_CE48F09631493940_METHOD_1_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x198E63C0)
#define CLASS_1_CE48F09631493940_METHOD_1_F0E4FAC8E5EC9E93_1_OFFSET UNITYSDK_OFFSET(0x198E5860)
#define CLASS_1_CE48F09631493940_METHOD_1_F0E4FAC8E5EC9E93_OFFSET UNITYSDK_OFFSET(0x198E6360)
#define CLASS_1_CE48F09631493940_SET_SPAWNBRICKLIST_OFFSET UNITYSDK_OFFSET(0x198E6AB0)
#define CLASS_1_CE48F09631493940__CTOR_OFFSET UNITYSDK_OFFSET(0x198E52C0)

inline static constexpr unsigned int Class_1_CE48F09631493940_TypeDefinitionIndex = 35607;

class Class_1_CE48F09631493940 : public ::System::Object
{
public:
	::Class_4_2E0A1A668714B3CC* Field_1_0; // 0x10
	::System::Collections::Generic::Queue_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_465A9E6CC2B0EF21*>* _SpawnBrickList_k__BackingField; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x30
	::System::Boolean Field_1_6; // 0x31
	::System::UInt32 Field_1_7; // 0x34
	::System::Int32 Field_1_8; // 0x38
	::System::Single Field_1_9; // 0x3C
	::System::Single Field_1_10; // 0x40

	::System::Void _ctor(::Class_4_2E0A1A668714B3CC* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::UInt32 a6, ::System::UInt32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_2E0A1A668714B3CC*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::Class_2_465A9E6CC2B0EF21* Method_1_7496241C47EAB0B8(::RPG::MVector2 a1, ::System::UInt32 a2)
	{
		return ((::Class_2_465A9E6CC2B0EF21*(*)(::PVOID, ::RPG::MVector2, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_7496241C47EAB0B8_OFFSET))(this, a1, a2);
	}

	::Class_2_465A9E6CC2B0EF21* Method_1_0456677CD79C183D(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3)
	{
		return ((::Class_2_465A9E6CC2B0EF21*(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_0456677CD79C183D_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_465A9E6CC2B0EF21* Method_1_DB112C30198629F3(::System::UInt32 a1, ::RPG::MVector2 a2, ::RPG::MVector3 a3)
	{
		return ((::Class_2_465A9E6CC2B0EF21*(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_DB112C30198629F3_OFFSET))(this, a1, a2, a3);
	}

	::RPG::MVector2 Method_1_B6E70F1D6F71D0B3()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_B6E70F1D6F71D0B3_OFFSET))(this);
	}

	::System::UInt32 Method_1_F0E4FAC8E5EC9E93()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_F0E4FAC8E5EC9E93_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_E04373D96F3697CE(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_E04373D96F3697CE_OFFSET))(this, a1);
	}

	::Class_2_465A9E6CC2B0EF21* Method_1_C5F10735C9BD56A8()
	{
		return ((::Class_2_465A9E6CC2B0EF21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_C5F10735C9BD56A8_OFFSET))(this);
	}

	::System::Single Method_1_AD76C3B16A33D2D3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_AD76C3B16A33D2D3_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_17120C903700ED15(::System::UInt32 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_17120C903700ED15_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F0E4FAC8E5EC9E93_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_F0E4FAC8E5EC9E93_1_OFFSET))(this);
	}

	::System::Void Method_1_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Void Method_1_D05723CC44C9E0C5(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_METHOD_1_D05723CC44C9E0C5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_465A9E6CC2B0EF21*>* get_SpawnBrickList()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_465A9E6CC2B0EF21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_GET_SPAWNBRICKLIST_OFFSET))(this);
	}

	::System::Void set_SpawnBrickList(::System::Collections::Generic::List_1<::Class_2_465A9E6CC2B0EF21*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_465A9E6CC2B0EF21*>*))((::PBYTE)hIl2Cpp + CLASS_1_CE48F09631493940_SET_SPAWNBRICKLIST_OFFSET))(this, a1);
	}
};
