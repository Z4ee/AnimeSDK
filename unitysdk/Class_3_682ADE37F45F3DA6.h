#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_4D61A7A49E7F7878;
class Class_3_682ADE37F45F3DA6_Class_3_B92141602368DE54;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_682ADE37F45F3DA6_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11C42F80)
#define CLASS_3_682ADE37F45F3DA6_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11C432C0)
#define CLASS_3_682ADE37F45F3DA6_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11C43240)
#define CLASS_3_682ADE37F45F3DA6_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11C42E00)
#define CLASS_3_682ADE37F45F3DA6__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C42FD0)
#define CLASS_3_682ADE37F45F3DA6__CTOR_OFFSET UNITYSDK_OFFSET(0x11C43050)

inline static constexpr unsigned int Class_3_682ADE37F45F3DA6_TypeDefinitionIndex = 86845;

class Class_3_682ADE37F45F3DA6 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x4E; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::Class_2_4D61A7A49E7F7878*>* Field_3_6; // 0x50
	::Il2CppArray<::Class_3_682ADE37F45F3DA6_Class_3_B92141602368DE54*>* Field_3_1; // 0x58
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_3_4; // 0x60
	::System::Collections::Generic::List_1<::Class_2_4D61A7A49E7F7878*>* Field_3_5; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_4D61A7A49E7F7878*>* Field_3_7; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_682ADE37F45F3DA6* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_682ADE37F45F3DA6*(*)())((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
