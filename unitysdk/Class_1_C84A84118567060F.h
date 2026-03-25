#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_37209C6CE609B59C.h"
#include "unitysdk/Struct_2_7250B7BB9413AA62.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24CACD86BEDF8D9B;
class Class_1_4F29D84C295B255D;
namespace RPGTools::Octree::Generation { class OctreeData; }
namespace RPGTools::Octree::Generation { class OctreeLinkData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C84A84118567060F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E19BA0)
#define CLASS_1_C84A84118567060F_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x8E197A0)
#define CLASS_1_C84A84118567060F_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x8E197B0)
#define CLASS_1_C84A84118567060F_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x8E197C0)
#define CLASS_1_C84A84118567060F_METHOD_1_0AED1827146A0936_OFFSET UNITYSDK_OFFSET(0x8E1A0E0)
#define CLASS_1_C84A84118567060F_METHOD_1_283129C30296ABB9_OFFSET UNITYSDK_OFFSET(0x8E19D00)
#define CLASS_1_C84A84118567060F_METHOD_1_3D42765ED80D6DAA_OFFSET UNITYSDK_OFFSET(0x8E19FC0)
#define CLASS_1_C84A84118567060F_METHOD_1_59EB6225A2B14619_OFFSET UNITYSDK_OFFSET(0x8E1A4C0)
#define CLASS_1_C84A84118567060F_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x8E19720)
#define CLASS_1_C84A84118567060F_METHOD_1_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x8E19920)
#define CLASS_1_C84A84118567060F_METHOD_1_85D7F5EB6E87657A_OFFSET UNITYSDK_OFFSET(0x8E1A2F0)
#define CLASS_1_C84A84118567060F_METHOD_1_88CDD56924254E8F_OFFSET UNITYSDK_OFFSET(0x8E1A5F0)
#define CLASS_1_C84A84118567060F_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x8E1AC00)
#define CLASS_1_C84A84118567060F_METHOD_1_BD2B5FECFD1C7933_OFFSET UNITYSDK_OFFSET(0x8E1A180)
#define CLASS_1_C84A84118567060F_METHOD_1_DE2BC44ACB86CE8C_1_OFFSET UNITYSDK_OFFSET(0x8E19EF0)
#define CLASS_1_C84A84118567060F_METHOD_1_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0x8E19E20)
#define CLASS_1_C84A84118567060F__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E1ACA0)
#define CLASS_1_C84A84118567060F__CTOR_OFFSET UNITYSDK_OFFSET(0x8E197D0)

inline static constexpr unsigned int Class_1_C84A84118567060F_TypeDefinitionIndex = 39622;

class Class_1_C84A84118567060F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Struct_2_7250B7BB9413AA62>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::Queue_1<::Struct_2_7250B7BB9413AA62>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C84A84118567060F_TypeDefinitionIndex)->GetStaticField(0x1A770);
	}
	::RPGTools::Octree::Generation::OctreeData* Field_1_2; // 0x10
	::Struct_2_7250B7BB9413AA62 Field_1_1; // 0x18
	::Class_1_4F29D84C295B255D* Field_1_4; // 0x28
	::Class_1_24CACD86BEDF8D9B* Field_1_5; // 0x30
	::UnityEngine::Transform* Field_1_3; // 0x38
	::System::Single _MinSize_k__BackingField; // 0x40
	::Unity::Collections::NativeArray_1<::Struct_2_37209C6CE609B59C> Field_1_0; // 0x48
	::System::Int32 _MaxDepth_k__BackingField; // 0x58
	::System::Single _MaxSize_k__BackingField; // 0x5C

	::System::Void _ctor(::RPGTools::Octree::Generation::OctreeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Octree::Generation::OctreeData*))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::System::Int32 get_MaxDepth()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_GET_MAXDEPTH_OFFSET))(this);
	}

	::System::Single get_MaxSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_GET_MAXSIZE_OFFSET))(this);
	}

	::System::Single get_MinSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_GET_MINSIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_DISPOSE_OFFSET))(this);
	}

	::RPGTools::Octree::Generation::OctreeLinkData* Method_1_283129C30296ABB9(::System::String* a1)
	{
		return ((::RPGTools::Octree::Generation::OctreeLinkData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_283129C30296ABB9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_DE2BC44ACB86CE8C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_DE2BC44ACB86CE8C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_DE2BC44ACB86CE8C_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_DE2BC44ACB86CE8C_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3D42765ED80D6DAA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_3D42765ED80D6DAA_OFFSET))(this, a1);
	}

	::Struct_2_7250B7BB9413AA62 Method_1_0AED1827146A0936(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_7250B7BB9413AA62(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_0AED1827146A0936_OFFSET))(this, a1);
	}

	::Struct_2_7250B7BB9413AA62 Method_1_85D7F5EB6E87657A(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_7250B7BB9413AA62(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_85D7F5EB6E87657A_OFFSET))(this, a1);
	}

	::Struct_2_7250B7BB9413AA62 Method_1_59EB6225A2B14619(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_7250B7BB9413AA62(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_59EB6225A2B14619_OFFSET))(this, a1);
	}

	::Struct_2_7250B7BB9413AA62 Method_1_88CDD56924254E8F(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_7250B7BB9413AA62(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_88CDD56924254E8F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BD2B5FECFD1C7933(::Struct_2_7250B7BB9413AA62& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7250B7BB9413AA62&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_BD2B5FECFD1C7933_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C84A84118567060F_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
