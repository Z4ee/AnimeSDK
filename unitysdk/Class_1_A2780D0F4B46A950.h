#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A2780D0F4B46A950_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CBA7C0)
#define CLASS_1_A2780D0F4B46A950_GET_ITEMLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18CBBA90)
#define CLASS_1_A2780D0F4B46A950_GET_ITEMLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x18CBBAD0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x18CBB980)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_0857912DB84CBBCA_OFFSET UNITYSDK_OFFSET(0x18CBB3C0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_1F20DDB3D9CE5BBE_OFFSET UNITYSDK_OFFSET(0x18CBB6A0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18CBAF50)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18CBB850)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18CBB170)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x18CBAFB0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x18CBBBC0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x18CBB8E0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x18CBABA0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_6FF4910FE99A1BD7_OFFSET UNITYSDK_OFFSET(0x18CBBBD0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_9AFB3124F064E3D7_OFFSET UNITYSDK_OFFSET(0x18CBB1B0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_9C8DF1E1DEED8718_OFFSET UNITYSDK_OFFSET(0x18CBAA00)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x18CBBB10)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18CBB590)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18CBB5D0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x18CBB610)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18CBB550)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_D31E255A47A52D67_OFFSET UNITYSDK_OFFSET(0x18CBA970)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x18CBB650)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_F1372164966A6952_OFFSET UNITYSDK_OFFSET(0x18CBB730)
#define CLASS_1_A2780D0F4B46A950_SET_ITEMLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18CBBAB0)
#define CLASS_1_A2780D0F4B46A950_SET_ITEMLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x18CBBAF0)
#define CLASS_1_A2780D0F4B46A950__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBA690)

inline static constexpr unsigned int Class_1_A2780D0F4B46A950_TypeDefinitionIndex = 78289;

class Class_1_A2780D0F4B46A950 : public ::System::Object
{
public:
	::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x10
	::UnityEngine::Transform* BLHPDCBMANF; // 0x18
	::RPG::Client::Prop::PinballPuzzleItemConfig LINNGFPLHNF; // 0x20
	::RPG::Client::Prop::PinballPuzzleBoard* COAMCKILKPH; // 0x58
	::UnityEngine::Transform* PDJGEDNLBKJ; // 0x60
	::UnityEngine::Transform* LLKDMBLKFPM; // 0x68
	::System::Int32 FJCJFOBLIIK; // 0x70
	::RPG::Client::Prop::ChessDirection IFJHHDGEKGO; // 0x74
	::System::Int32 FFHHEBOENME; // 0x78
	::UnityEngine::Vector3 _ItemLocalRotation_k__BackingField; // 0x7C
	::UnityEngine::Vector3 _ItemLocalPosition_k__BackingField; // 0x88
	::System::Int32 MLIMFKACJFK; // 0x94

	::System::Void _ctor(::RPG::Client::Prop::PinballPuzzleItemConfig a1, ::RPG::Client::Prop::PinballPuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig, ::RPG::Client::Prop::PinballPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Prop::PinballPuzzleItemType Method_1_D31E255A47A52D67()
	{
		return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_D31E255A47A52D67_OFFSET))(this);
	}

	::System::Void Method_1_9C8DF1E1DEED8718(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_9C8DF1E1DEED8718_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_9AFB3124F064E3D7()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_9AFB3124F064E3D7_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_0857912DB84CBBCA(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_0857912DB84CBBCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_1F20DDB3D9CE5BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_1F20DDB3D9CE5BBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1372164966A6952(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_F1372164966A6952_OFFSET))(this, a1);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_1_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_01509228E3A9577B_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_ItemLocalPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_GET_ITEMLOCALPOSITION_OFFSET))(this);
	}

	::System::Void set_ItemLocalPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_SET_ITEMLOCALPOSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_ItemLocalRotation()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_GET_ITEMLOCALROTATION_OFFSET))(this);
	}

	::System::Void set_ItemLocalRotation(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_SET_ITEMLOCALROTATION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_1_6FF4910FE99A1BD7()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_6FF4910FE99A1BD7_OFFSET))(this);
	}
};
