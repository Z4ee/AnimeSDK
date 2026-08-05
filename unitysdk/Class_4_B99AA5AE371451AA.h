#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_05CB482B8638F6BA;
class Class_1_0D5754D80BDE5BD2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_B99AA5AE371451AA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1391F7B0)
#define CLASS_4_B99AA5AE371451AA_METHOD_4_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1391FAF0)
#define CLASS_4_B99AA5AE371451AA_METHOD_4_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x1391FA30)
#define CLASS_4_B99AA5AE371451AA_METHOD_4_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1391FAE0)
#define CLASS_4_B99AA5AE371451AA_METHOD_4_9F34110CB06313DC_OFFSET UNITYSDK_OFFSET(0x1391FB00)
#define CLASS_4_B99AA5AE371451AA_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1391FA50)
#define CLASS_4_B99AA5AE371451AA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1391F880)
#define CLASS_4_B99AA5AE371451AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1391F800)
#define CLASS_4_B99AA5AE371451AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1391F960)

inline static constexpr unsigned int Class_4_B99AA5AE371451AA_TypeDefinitionIndex = 73826;

class Class_4_B99AA5AE371451AA : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_0 = 0x227; // 0x0
	// static const ::System::String* Field_4_7; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_4_11; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* Field_4_4; // 0x58
	::Class_1_0D5754D80BDE5BD2* Field_4_5; // 0x60
	::System::Int64 Field_4_6; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_B99AA5AE371451AA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B99AA5AE371451AA__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B99AA5AE371451AA_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B99AA5AE371451AA_ONCLEAN_OFFSET))(this);
	}

	::Class_1_05CB482B8638F6BA* Method_4_528BD4865C714C5C()
	{
		return ((::Class_1_05CB482B8638F6BA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B99AA5AE371451AA_METHOD_4_528BD4865C714C5C_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B99AA5AE371451AA_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int64 Method_4_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B99AA5AE371451AA_METHOD_4_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_4_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_4_B99AA5AE371451AA_METHOD_4_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	static ::Class_4_B99AA5AE371451AA* Method_4_9F34110CB06313DC()
	{
		return ((::Class_4_B99AA5AE371451AA*(*)())((::PBYTE)hIl2Cpp + CLASS_4_B99AA5AE371451AA_METHOD_4_9F34110CB06313DC_OFFSET))();
	}
};
