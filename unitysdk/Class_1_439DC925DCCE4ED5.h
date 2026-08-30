#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeData.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Octree::Generation { class OctreeData; }
namespace RPGTools::Octree::Generation { class OctreeNodeData; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_439DC925DCCE4ED5_METHOD_1_07E965A025A15E6D_OFFSET UNITYSDK_OFFSET(0xC10EB80)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_0EE12D7DCF00EB83_OFFSET UNITYSDK_OFFSET(0xC10EC10)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_1277B1595726E3DF_OFFSET UNITYSDK_OFFSET(0xC10E600)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_5F5BC6FF1250972A_OFFSET UNITYSDK_OFFSET(0xC10EF60)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_77406E42F50379F8_OFFSET UNITYSDK_OFFSET(0xC10F100)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_827129BB007FA1AC_OFFSET UNITYSDK_OFFSET(0xC10E270)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_8320F59AE520D42B_OFFSET UNITYSDK_OFFSET(0xC10E450)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_8BA20580B0F84374_OFFSET UNITYSDK_OFFSET(0xC10E0F0)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_9A432436226FEB01_OFFSET UNITYSDK_OFFSET(0xC10DC40)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_9C5748A0F1D039CB_OFFSET UNITYSDK_OFFSET(0xC10DA70)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_B6D395FED9EB2AF2_OFFSET UNITYSDK_OFFSET(0xC10E6C0)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_CA1979C9C682CBD3_OFFSET UNITYSDK_OFFSET(0xC10F050)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_CD386770A5D2299F_OFFSET UNITYSDK_OFFSET(0xC10ED00)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_D073FCBBC1B2AB3F_OFFSET UNITYSDK_OFFSET(0xC10F2F0)
#define CLASS_1_439DC925DCCE4ED5_METHOD_1_FF0DF9C5801B83B1_OFFSET UNITYSDK_OFFSET(0xC10E370)
#define CLASS_1_439DC925DCCE4ED5__CCTOR_OFFSET UNITYSDK_OFFSET(0xC10F430)

inline static constexpr unsigned int Class_1_439DC925DCCE4ED5_TypeDefinitionIndex = 49341;

class Class_1_439DC925DCCE4ED5 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_BPIPGCNHLKO()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_439DC925DCCE4ED5_TypeDefinitionIndex)->GetStaticField(0x1AA80);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_MCNHCAPBMDG()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_439DC925DCCE4ED5_TypeDefinitionIndex)->GetStaticField(0x1AA88);
	}
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_IPFJOLOOAGF()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_439DC925DCCE4ED5_TypeDefinitionIndex)->GetStaticField(0x1AA90);
	}
	// static const ::System::Int32 KKHEHPGODNF = 0x6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5__CCTOR_OFFSET))();
	}

	static ::RPGTools::Octree::Generation::OctreeData* Method_1_9C5748A0F1D039CB(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::LayerMask a5)
	{
		return ((::RPGTools::Octree::Generation::OctreeData*(*)(::System::String*, ::UnityEngine::Transform*, ::System::Single, ::System::Int32, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_9C5748A0F1D039CB_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_9A432436226FEB01(::UnityEngine::Transform* a1, ::RPGTools::Octree::Generation::OctreeNodeData* a2, ::System::Int32 a3, ::UnityEngine::LayerMask a4)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::RPGTools::Octree::Generation::OctreeNodeData*, ::System::Int32, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_9A432436226FEB01_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8BA20580B0F84374(::RPGTools::Octree::Generation::OctreeNodeData* a1)
	{
		return ((::System::Void(*)(::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_8BA20580B0F84374_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8320F59AE520D42B(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_8320F59AE520D42B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_827129BB007FA1AC(::RPGTools::Octree::Generation::OctreeNodeData* a1)
	{
		return ((::System::Int32(*)(::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_827129BB007FA1AC_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_B6D395FED9EB2AF2(::Struct_2_A143022D1701BC76 a1, ::Struct_2_A143022D1701BC76 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Struct_2_A143022D1701BC76, ::Struct_2_A143022D1701BC76))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_B6D395FED9EB2AF2_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_07E965A025A15E6D(::Struct_2_A143022D1701BC76 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Int32(*)(::Struct_2_A143022D1701BC76, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_07E965A025A15E6D_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_1277B1595726E3DF(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_1277B1595726E3DF_OFFSET))(a1);
	}

	static ::System::Single Method_1_0EE12D7DCF00EB83(::Struct_2_A143022D1701BC76 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Single(*)(::Struct_2_A143022D1701BC76, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_0EE12D7DCF00EB83_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_CD386770A5D2299F(::Struct_2_A143022D1701BC76 a1, ::Struct_2_A143022D1701BC76 a2)
	{
		return ((::System::Int32(*)(::Struct_2_A143022D1701BC76, ::Struct_2_A143022D1701BC76))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_CD386770A5D2299F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_5F5BC6FF1250972A(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_5F5BC6FF1250972A_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_CA1979C9C682CBD3(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_CA1979C9C682CBD3_OFFSET))(a1);
	}

	static ::System::String* Method_1_FF0DF9C5801B83B1(::System::String* a1, ::RPGTools::Octree::Generation::OctreeNodeData* a2)
	{
		return ((::System::String*(*)(::System::String*, ::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_FF0DF9C5801B83B1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_77406E42F50379F8(::Il2CppArray<::RPGTools::Octree::Generation::OctreeNodeNativeData>* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPGTools::Octree::Generation::OctreeNodeData* a4)
	{
		return ((::System::Int32(*)(::Il2CppArray<::RPGTools::Octree::Generation::OctreeNodeNativeData>*, ::System::Int32, ::System::Int32, ::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_77406E42F50379F8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D073FCBBC1B2AB3F(::UnityEngine::Transform* a1, ::Struct_2_A143022D1701BC76 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::Struct_2_A143022D1701BC76))((::PBYTE)hIl2Cpp + CLASS_1_439DC925DCCE4ED5_METHOD_1_D073FCBBC1B2AB3F_OFFSET))(a1, a2);
	}
};
