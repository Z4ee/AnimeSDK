#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/Enum_3_316CBDE931844AF4.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_4BD7B665C4CA18EA;
class Class_3_7E6A0C4EA6BF05CC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_921BBA4FF7CA4B63_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16D3B530)
#define CLASS_4_921BBA4FF7CA4B63_METHOD_4_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x16D3BA10)
#define CLASS_4_921BBA4FF7CA4B63_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16D3B980)
#define CLASS_4_921BBA4FF7CA4B63_METHOD_4_C9796185EB79C68E_OFFSET UNITYSDK_OFFSET(0x16D3B830)
#define CLASS_4_921BBA4FF7CA4B63_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16D3B600)
#define CLASS_4_921BBA4FF7CA4B63__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D3B580)
#define CLASS_4_921BBA4FF7CA4B63__CTOR_OFFSET UNITYSDK_OFFSET(0x16D3B760)

inline static constexpr unsigned int Class_4_921BBA4FF7CA4B63_TypeDefinitionIndex = 46284;

class Class_4_921BBA4FF7CA4B63 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x23A; // 0x0
	::Class_3_7E6A0C4EA6BF05CC* Field_4_8; // 0x50
	::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>* Field_4_6; // 0x58
	::System::String* Field_4_9; // 0x60
	::System::String* Field_4_3; // 0x68
	::MoleMole::HollowChessboard::RenderDataHandle Field_4_10; // 0x70
	::Class_1_4BD7B665C4CA18EA* Field_4_5; // 0x80
	::System::Int32 Field_4_1; // 0x88
	::System::Int32 Field_4_11; // 0x8C
	::Enum_3_316CBDE931844AF4 Field_4_7; // 0x90
	::System::Int32 Field_4_2; // 0x94
	::System::Int32 Field_4_4; // 0x98

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

	static ::Class_4_921BBA4FF7CA4B63* Method_4_C9796185EB79C68E()
	{
		return ((::Class_4_921BBA4FF7CA4B63*(*)())((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63_METHOD_4_C9796185EB79C68E_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_921BBA4FF7CA4B63_METHOD_4_A1D8CD775DEC3C21_1_OFFSET))(this);
	}
};
