#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E9D66C2E936505B0_Struct_2_A82CA6E3A9569B51_3.h"
#include "unitysdk/Enum_3_5D8A958F9310C1C3.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Geometry/Segment2D.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Octree/BoundingBox.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_50E88D52C3691096;
class Class_1_8B714AED6096E68C;
class Class_2_2F03388F637FD9EB;
class Class_3_61A5922E5046F385_3;
class Class_3_9F653B35768E335C;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_E9D66C2E936505B0_METHOD_1_24BB8FC4536BDA11_OFFSET UNITYSDK_OFFSET(0xE11CF30)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_2B8B70092FE5FFBC_OFFSET UNITYSDK_OFFSET(0xE11E400)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_3A5CAF0EAB525E4E_OFFSET UNITYSDK_OFFSET(0xE11EF20)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_46B9BC887F2CBABD_OFFSET UNITYSDK_OFFSET(0xE11DBE0)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_4A6FAD65DBDE087A_OFFSET UNITYSDK_OFFSET(0xE11DF10)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_4DA98D621510F52F_OFFSET UNITYSDK_OFFSET(0xE11EE50)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_4EA0A763315DB933_OFFSET UNITYSDK_OFFSET(0xE11F4D0)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_56342905BC20E509_OFFSET UNITYSDK_OFFSET(0xE11D070)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_6C8241A90D639603_OFFSET UNITYSDK_OFFSET(0xE11CD30)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_6ED21AC5DFC75E99_1_OFFSET UNITYSDK_OFFSET(0xE11D8C0)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_6ED21AC5DFC75E99_OFFSET UNITYSDK_OFFSET(0xE11CC10)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_6F6513564E6748E7_1_OFFSET UNITYSDK_OFFSET(0xE11D9E0)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_6F6513564E6748E7_OFFSET UNITYSDK_OFFSET(0xE11D820)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_B489189D01522E90_OFFSET UNITYSDK_OFFSET(0xE11C860)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0xE11ED80)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_C64131E7B9CB7B24_OFFSET UNITYSDK_OFFSET(0xE11F340)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_E27653A5FACE3C07_OFFSET UNITYSDK_OFFSET(0xE11F9F0)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_F8B758E63B206BFF_OFFSET UNITYSDK_OFFSET(0xE11CA90)
#define CLASS_1_E9D66C2E936505B0_METHOD_1_F9483C60251E426E_OFFSET UNITYSDK_OFFSET(0xE11DA80)
#define CLASS_1_E9D66C2E936505B0__CCTOR_OFFSET UNITYSDK_OFFSET(0xE11C830)

inline static constexpr unsigned int Class_1_E9D66C2E936505B0_TypeDefinitionIndex = 50620;

class Class_1_E9D66C2E936505B0 : public ::System::Object
{
public:
	static ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>* StaticGet_Field_1_6()
	{
		return (::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E9D66C2E936505B0_TypeDefinitionIndex)->GetStaticField(0x365E0);
	}
	static ::Class_1_50E88D52C3691096** StaticGet_Field_1_7()
	{
		return (::Class_1_50E88D52C3691096**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E9D66C2E936505B0_TypeDefinitionIndex)->GetStaticField(0x365F0);
	}
	static ::Class_1_8B714AED6096E68C** StaticGet_Field_1_8()
	{
		return (::Class_1_8B714AED6096E68C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E9D66C2E936505B0_TypeDefinitionIndex)->GetStaticField(0x365F8);
	}
	// static const ::System::Int32 Field_1_0 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_1 = 0xFFFFFFFF; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B489189D01522E90(::MoleMole::EntityHandle a1, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*> a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_B489189D01522E90_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F8B758E63B206BFF(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_F8B758E63B206BFF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6ED21AC5DFC75E99(::Class_3_9F653B35768E335C* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_9F653B35768E335C*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_6ED21AC5DFC75E99_OFFSET))(a1, a2);
	}

	static ::Octree::BoundingBox Method_1_6C8241A90D639603(::UnityEngine::Bounds a1)
	{
		return ((::Octree::BoundingBox(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_6C8241A90D639603_OFFSET))(a1);
	}

	static ::System::Void Method_1_24BB8FC4536BDA11(::Class_3_61A5922E5046F385_3* a1)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_3*))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_24BB8FC4536BDA11_OFFSET))(a1);
	}

	static ::Class_2_2F03388F637FD9EB* Method_1_56342905BC20E509(::Foundation::AssetPath a1, ::System::Boolean a2, ::Foundation::Geometry::Segment2D a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_2_2F03388F637FD9EB*(*)(::Foundation::AssetPath, ::System::Boolean, ::Foundation::Geometry::Segment2D, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_56342905BC20E509_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_6F6513564E6748E7(::Class_3_61A5922E5046F385_3* a1)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_3*))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_6F6513564E6748E7_OFFSET))(a1);
	}

	static ::System::Void Method_1_6ED21AC5DFC75E99_1(::Class_3_61A5922E5046F385_3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_6ED21AC5DFC75E99_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6F6513564E6748E7_1(::Class_3_9F653B35768E335C* a1)
	{
		return ((::System::Void(*)(::Class_3_9F653B35768E335C*))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_6F6513564E6748E7_1_OFFSET))(a1);
	}

	static ::Enum_3_5D8A958F9310C1C3 Method_1_F9483C60251E426E(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::Enum_3_5D8A958F9310C1C3(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_F9483C60251E426E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_46B9BC887F2CBABD(::MoleMole::EntityHandle a1, ::Enum_3_5D8A958F9310C1C3 a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::Enum_3_5D8A958F9310C1C3, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_46B9BC887F2CBABD_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_4A6FAD65DBDE087A(::MoleMole::Battle::Entity* a1, ::Class_1_50E88D52C3691096* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_1_50E88D52C3691096*))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_4A6FAD65DBDE087A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2B8B70092FE5FFBC(::Class_3_61A5922E5046F385_3* a1)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_3*))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_2B8B70092FE5FFBC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4DA98D621510F52F(::Class_3_9F653B35768E335C* a1, ::MoleMole::EntityHandle a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::Class_3_9F653B35768E335C*, ::MoleMole::EntityHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_4DA98D621510F52F_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_8B714AED6096E68C* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_8B714AED6096E68C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_B64C60973842FE45_OFFSET))();
	}

	static ::System::Boolean Method_1_3A5CAF0EAB525E4E(::MoleMole::EntityHandle a1, ::MoleMole::EntityHandle a2, ::System::String* a3, ::System::Boolean& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::EntityHandle, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_3A5CAF0EAB525E4E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_C64131E7B9CB7B24(::MoleMole::EntityHandle a1, ::Class_1_E9D66C2E936505B0_Struct_2_A82CA6E3A9569B51_3& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::Class_1_E9D66C2E936505B0_Struct_2_A82CA6E3A9569B51_3&))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_C64131E7B9CB7B24_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_4EA0A763315DB933(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_4EA0A763315DB933_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E27653A5FACE3C07(::MoleMole::Battle::Entity* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_1_E9D66C2E936505B0_METHOD_1_E27653A5FACE3C07_OFFSET))(a1, a2);
	}
};
