#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeData.h"
#include "unitysdk/Struct_2_468F1D800AD1758C.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_253;
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_A7D944F5CC73A7F2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111E74D0)
#define CLASS_1_A7D944F5CC73A7F2_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x111E7A20)
#define CLASS_1_A7D944F5CC73A7F2_METHOD_1_04DBF9524208234B_OFFSET UNITYSDK_OFFSET(0x111E75C0)
#define CLASS_1_A7D944F5CC73A7F2_METHOD_1_59D634CA8DD784B2_OFFSET UNITYSDK_OFFSET(0x111E7920)
#define CLASS_1_A7D944F5CC73A7F2_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x111E6CC0)
#define CLASS_1_A7D944F5CC73A7F2_METHOD_1_DCC3812E870317C4_OFFSET UNITYSDK_OFFSET(0x111E6B30)
#define CLASS_1_A7D944F5CC73A7F2__CTOR_OFFSET UNITYSDK_OFFSET(0x111E6B80)

inline static constexpr unsigned int Class_1_A7D944F5CC73A7F2_TypeDefinitionIndex = 39633;

class Class_1_A7D944F5CC73A7F2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x200; // 0x0
	::System::IO::BinaryReader* Field_1_8; // 0x10
	::Il2CppArray<::System::Byte>* Field_1_6; // 0x18
	::Class_0_16E4307DCC419505_253* Field_1_2; // 0x20
	::System::String* _FilePath_k__BackingField; // 0x28
	::System::IO::MemoryStream* Field_1_7; // 0x30
	::System::Int32 Field_1_4; // 0x38
	::System::Int32 Field_1_5; // 0x3C
	::Struct_2_468F1D800AD1758C Field_1_3; // 0x40

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A7D944F5CC73A7F2__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_DCC3812E870317C4(::System::String* a1, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeNodeNativeData>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeNodeNativeData>*))((::PBYTE)hIl2Cpp + CLASS_1_A7D944F5CC73A7F2_METHOD_1_DCC3812E870317C4_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D944F5CC73A7F2_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_04DBF9524208234B(::RPGTools::Octree::Generation::OctreeNodeNativeData& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::Octree::Generation::OctreeNodeNativeData&))((::PBYTE)hIl2Cpp + CLASS_1_A7D944F5CC73A7F2_METHOD_1_04DBF9524208234B_OFFSET))(this, a1);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D944F5CC73A7F2_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Boolean Method_1_59D634CA8DD784B2(::Struct_2_468F1D800AD1758C& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_468F1D800AD1758C&))((::PBYTE)hIl2Cpp + CLASS_1_A7D944F5CC73A7F2_METHOD_1_59D634CA8DD784B2_OFFSET))(this, a1);
	}

	::System::String* get_FilePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D944F5CC73A7F2_GET_FILEPATH_OFFSET))(this);
	}
};
