#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1BD9A352EF1010C8.h"
#include "unitysdk/Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C47576BEFCFAD595;
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_55373297DA27393D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA419430)
#define CLASS_2_55373297DA27393D_GET_LASTVIEWLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xA419F40)
#define CLASS_2_55373297DA27393D_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA419CC0)
#define CLASS_2_55373297DA27393D_METHOD_2_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0xA419E40)
#define CLASS_2_55373297DA27393D_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xA4197E0)
#define CLASS_2_55373297DA27393D_METHOD_2_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0xA419E20)
#define CLASS_2_55373297DA27393D_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xA419D70)
#define CLASS_2_55373297DA27393D_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xA419E50)
#define CLASS_2_55373297DA27393D_METHOD_2_6E8E77E17A6ED590_OFFSET UNITYSDK_OFFSET(0xA419E30)
#define CLASS_2_55373297DA27393D_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xA419D80)
#define CLASS_2_55373297DA27393D_METHOD_2_8C90C775EAE86885_OFFSET UNITYSDK_OFFSET(0xA419480)
#define CLASS_2_55373297DA27393D_METHOD_2_AF82526B82A7316A_OFFSET UNITYSDK_OFFSET(0xA419D50)
#define CLASS_2_55373297DA27393D_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA4194E0)
#define CLASS_2_55373297DA27393D_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xA419B90)
#define CLASS_2_55373297DA27393D_METHOD_2_BA9FD7FEB8EF606B_OFFSET UNITYSDK_OFFSET(0xA419870)
#define CLASS_2_55373297DA27393D_METHOD_2_EECE4A73EA35B88A_OFFSET UNITYSDK_OFFSET(0xA419D40)
#define CLASS_2_55373297DA27393D_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xA419D30)
#define CLASS_2_55373297DA27393D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA419D20)
#define CLASS_2_55373297DA27393D_SET_LASTVIEWLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xA419F50)
#define CLASS_2_55373297DA27393D__CTOR_OFFSET UNITYSDK_OFFSET(0xA419380)

inline static constexpr unsigned int Class_2_55373297DA27393D_TypeDefinitionIndex = 69292;

class Class_2_55373297DA27393D : public ::Class_1_1BD9A352EF1010C8
{
public:
	::Class_1_C47576BEFCFAD595* Field_2_0; // 0x10
	::RPG::Client::ParkourGame::MonoParkourItem* Field_2_1; // 0x18
	::UnityEngine::Collider* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x28
	::UnityEngine::Renderer* Field_2_4; // 0x30
	::System::Int32 _LastViewLapCount_k__BackingField; // 0x38
	::System::Single Field_2_6; // 0x3C
	::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 Field_2_7; // 0x40
	::System::Single Field_2_8; // 0x4C
	::System::Boolean Field_2_9; // 0x50
	::System::Boolean Field_2_10; // 0x51
	::System::Single Field_2_11; // 0x54

	::System::Void _ctor(::Class_1_C47576BEFCFAD595* a1, ::RPG::Client::ParkourGame::MonoParkourItem* a2, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595*, ::RPG::Client::ParkourGame::MonoParkourItem*, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8C90C775EAE86885(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_8C90C775EAE86885_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA9FD7FEB8EF606B(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_BA9FD7FEB8EF606B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::MonoParkourItem* Method_2_EECE4A73EA35B88A()
	{
		return ((::RPG::Client::ParkourGame::MonoParkourItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_EECE4A73EA35B88A_OFFSET))(this);
	}

	::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 Method_2_AF82526B82A7316A()
	{
		return ((::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_AF82526B82A7316A_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::Renderer* Method_2_6E8E77E17A6ED590()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_6E8E77E17A6ED590_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_2_3CAC93BF77250DAD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_3CAC93BF77250DAD_OFFSET))(this);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Int32 get_LastViewLapCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_GET_LASTVIEWLAPCOUNT_OFFSET))(this);
	}

	::System::Void set_LastViewLapCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_55373297DA27393D_SET_LASTVIEWLAPCOUNT_OFFSET))(this, a1);
	}
};
