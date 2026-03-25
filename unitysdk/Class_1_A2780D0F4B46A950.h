#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A2780D0F4B46A950_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BF1550)
#define CLASS_1_A2780D0F4B46A950_GET_ITEMLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x8BF26D0)
#define CLASS_1_A2780D0F4B46A950_GET_ITEMLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x8BF2710)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x8BF25D0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_0857912DB84CBBCA_OFFSET UNITYSDK_OFFSET(0x8BF2090)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_1F20DDB3D9CE5BBE_OFFSET UNITYSDK_OFFSET(0x8BF2370)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8BF1C90)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_2DCB2312DF7D9560_OFFSET UNITYSDK_OFFSET(0x8BF1760)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8BF24B0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8BF1EA0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x8BF1CF0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x8BF27F0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x8BF18D0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_6FF4910FE99A1BD7_OFFSET UNITYSDK_OFFSET(0x8BF2800)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x8BF2540)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x8BF2740)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8BF2260)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8BF22A0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x8BF22E0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8BF2220)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_CAE9A3151CC55790_OFFSET UNITYSDK_OFFSET(0x8BF1EE0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_D31E255A47A52D67_OFFSET UNITYSDK_OFFSET(0x8BF16D0)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x8BF2320)
#define CLASS_1_A2780D0F4B46A950_METHOD_1_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x8BF2400)
#define CLASS_1_A2780D0F4B46A950_SET_ITEMLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x8BF26F0)
#define CLASS_1_A2780D0F4B46A950_SET_ITEMLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x8BF2730)
#define CLASS_1_A2780D0F4B46A950__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF1430)

inline static constexpr unsigned int Class_1_A2780D0F4B46A950_TypeDefinitionIndex = 64210;

class Class_1_A2780D0F4B46A950 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_11; // 0x10
	::RPG::GameCore::PropComponent* Field_1_9; // 0x18
	::UnityEngine::Transform* Field_1_8; // 0x20
	::RPG::Client::Prop::PinballPuzzleItemConfig Field_1_5; // 0x28
	::RPG::Client::Prop::PinballPuzzleBoard* Field_1_10; // 0x60
	::UnityEngine::Transform* Field_1_7; // 0x68
	::UnityEngine::Vector3 _ItemLocalRotation_k__BackingField; // 0x70
	::UnityEngine::Vector3 _ItemLocalPosition_k__BackingField; // 0x7C
	::RPG::Client::Prop::ChessDirection Field_1_2; // 0x88
	::System::Int32 Field_1_1; // 0x8C
	::System::Int32 Field_1_6; // 0x90
	::System::Int32 Field_1_0; // 0x94

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

	::System::Void Method_1_2DCB2312DF7D9560(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_2DCB2312DF7D9560_OFFSET))(this, a1);
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

	::UnityEngine::Transform* Method_1_CAE9A3151CC55790()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_CAE9A3151CC55790_OFFSET))(this);
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

	::System::Void Method_1_E52C357E96F7A058(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_E52C357E96F7A058_OFFSET))(this, a1);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_ItemLocalPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_GET_ITEMLOCALPOSITION_OFFSET))(this);
	}

	::System::Void set_ItemLocalPosition(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_SET_ITEMLOCALPOSITION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_ItemLocalRotation()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_GET_ITEMLOCALROTATION_OFFSET))(this);
	}

	::System::Void set_ItemLocalRotation(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A2780D0F4B46A950_SET_ITEMLOCALROTATION_OFFSET))(this, value);
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
