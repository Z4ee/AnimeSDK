#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_838AF0FA954DA998_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x12E70860)
#define CLASS_1_838AF0FA954DA998_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x12E70750)
#define CLASS_1_838AF0FA954DA998_METHOD_1_184AE6D5B1216FA2_OFFSET UNITYSDK_OFFSET(0x12E70760)
#define CLASS_1_838AF0FA954DA998_METHOD_1_725A39F9CC9D54F4_OFFSET UNITYSDK_OFFSET(0x12E70850)
#define CLASS_1_838AF0FA954DA998_METHOD_1_749F4AA747DBDEA7_OFFSET UNITYSDK_OFFSET(0x12E70880)
#define CLASS_1_838AF0FA954DA998_METHOD_1_88A95F65E7B777C0_OFFSET UNITYSDK_OFFSET(0x12E70DC0)
#define CLASS_1_838AF0FA954DA998_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x12E70700)
#define CLASS_1_838AF0FA954DA998_METHOD_1_B2E4C78175170F56_OFFSET UNITYSDK_OFFSET(0x12E70990)
#define CLASS_1_838AF0FA954DA998_METHOD_1_BEB33C534CF467ED_OFFSET UNITYSDK_OFFSET(0x12E70640)
#define CLASS_1_838AF0FA954DA998_METHOD_1_C1AEADB29C42C3A6_OFFSET UNITYSDK_OFFSET(0x12E70C90)
#define CLASS_1_838AF0FA954DA998_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12E70950)
#define CLASS_1_838AF0FA954DA998_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12E70910)
#define CLASS_1_838AF0FA954DA998_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x12E70870)
#define CLASS_1_838AF0FA954DA998__CTOR_OFFSET UNITYSDK_OFFSET(0x12E24370)

inline static constexpr unsigned int Class_1_838AF0FA954DA998_TypeDefinitionIndex = 39379;

class Class_1_838AF0FA954DA998 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::IO::MemoryStream* Field_1_1; // 0x18
	::System::UInt32 _Offset_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_BEB33C534CF467ED()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_BEB33C534CF467ED_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::UInt32 Method_1_184AE6D5B1216FA2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_184AE6D5B1216FA2_OFFSET))(this);
	}

	::RPG::Client::SectionType Method_1_725A39F9CC9D54F4()
	{
		return ((::RPG::Client::SectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_725A39F9CC9D54F4_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_SET_OFFSET_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>* Method_1_749F4AA747DBDEA7()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_749F4AA747DBDEA7_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_B2E4C78175170F56(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_B2E4C78175170F56_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1AEADB29C42C3A6(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_C1AEADB29C42C3A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_88A95F65E7B777C0(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_838AF0FA954DA998_METHOD_1_88A95F65E7B777C0_OFFSET))(this, a1);
	}
};
