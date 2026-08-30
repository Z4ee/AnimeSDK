#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeData.h"
#include "unitysdk/Struct_2_468F1D800AD1758C.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_298;
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_A7D944F5CC73A7F2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1821F310)
#define CLASS_1_A7D944F5CC73A7F2_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x1821F9C0)
#define CLASS_1_A7D944F5CC73A7F2_METHOD_1_46EDCC20B5602330_OFFSET UNITYSDK_OFFSET(0x1821F4D0)
#define CLASS_1_A7D944F5CC73A7F2_METHOD_1_59D634CA8DD784B2_OFFSET UNITYSDK_OFFSET(0x1821F8C0)
#define CLASS_1_A7D944F5CC73A7F2_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1821EC00)
#define CLASS_1_A7D944F5CC73A7F2_METHOD_1_DCC3812E870317C4_OFFSET UNITYSDK_OFFSET(0x1821EA90)
#define CLASS_1_A7D944F5CC73A7F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1821EAE0)

inline static constexpr unsigned int Class_1_A7D944F5CC73A7F2_TypeDefinitionIndex = 49327;

class Class_1_A7D944F5CC73A7F2 : public ::System::Object
{
public:
	// static const ::System::Int32 MHMEHGOKMJG = 0x200; // 0x0
	::System::String* _FilePath_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_298* IDHKPDHIAKE; // 0x18
	::System::IO::MemoryStream* IPMHANHEPME; // 0x20
	::Il2CppArray<::System::Byte>* PMIBLDJPBCB; // 0x28
	::System::IO::BinaryReader* KNOIGMKBPBE; // 0x30
	::Struct_2_468F1D800AD1758C GPHIHDNBMOM; // 0x38
	::System::Int32 ILCAMABKPNI; // 0x50
	::System::Int32 CLNKKOFGAAA; // 0x54

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

	::System::Boolean Method_1_46EDCC20B5602330(::RPGTools::Octree::Generation::OctreeNodeNativeData& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::Octree::Generation::OctreeNodeNativeData&))((::PBYTE)hIl2Cpp + CLASS_1_A7D944F5CC73A7F2_METHOD_1_46EDCC20B5602330_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D944F5CC73A7F2_METHOD_1_937F8473216A3162_OFFSET))(this);
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
