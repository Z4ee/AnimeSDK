#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/Enum_3_316CBDE931844AF4.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_4BD7B665C4CA18EA;
class Class_3_3EB2168D97754EAD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_921BBA4FF7CA4B63_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1342DEF0)
#define CLASS_4_921BBA4FF7CA4B63_METHOD_4_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x1342E3D0)
#define CLASS_4_921BBA4FF7CA4B63_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1342E1F0)
#define CLASS_4_921BBA4FF7CA4B63_METHOD_4_C9796185EB79C68E_OFFSET UNITYSDK_OFFSET(0x1342E280)
#define CLASS_4_921BBA4FF7CA4B63_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1342DFC0)
#define CLASS_4_921BBA4FF7CA4B63__CCTOR_OFFSET UNITYSDK_OFFSET(0x1342DF40)
#define CLASS_4_921BBA4FF7CA4B63__CTOR_OFFSET UNITYSDK_OFFSET(0x1342E120)

inline static constexpr unsigned int Class_4_921BBA4FF7CA4B63_TypeDefinitionIndex = 63565;

class Class_4_921BBA4FF7CA4B63 : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_1 = 0x23A; // 0x0
	::MoleMole::HollowChessboard::RenderDataHandle Field_4_15; // 0x50
	::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>* Field_4_11; // 0x60
	::System::String* Field_4_8; // 0x68
	::System::String* Field_4_6; // 0x70
	::Class_3_3EB2168D97754EAD* Field_4_9; // 0x78
	::Class_1_4BD7B665C4CA18EA* Field_4_4; // 0x80
	::Enum_3_316CBDE931844AF4 Field_4_10; // 0x88
	::System::Int32 Field_4_0; // 0x8C
	::System::Int32 Field_4_7; // 0x90
	::System::Int32 Field_4_5; // 0x94
	::System::Int32 Field_4_14; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_921BBA4FF7CA4B63* Method_4_C9796185EB79C68E()
	{
		return ((::Class_4_921BBA4FF7CA4B63*(*)())((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63_METHOD_4_C9796185EB79C68E_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63_METHOD_4_A1D8CD775DEC3C21_1_OFFSET))(this);
	}
};
