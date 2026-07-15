#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_46EA924A13E63904_GET_ISEFFECT_OFFSET UNITYSDK_OFFSET(0x16F0AD50)
#define CLASS_2_46EA924A13E63904_GET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0x16F0AD30)
#define CLASS_2_46EA924A13E63904_SET_ISEFFECT_OFFSET UNITYSDK_OFFSET(0x16F0AD60)
#define CLASS_2_46EA924A13E63904_SET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0x16F0AD40)
#define CLASS_2_46EA924A13E63904_UPDATE_OFFSET UNITYSDK_OFFSET(0x16F0ABE0)
#define CLASS_2_46EA924A13E63904__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0AAD0)

inline static constexpr unsigned int Class_2_46EA924A13E63904_TypeDefinitionIndex = 62082;

class Class_2_46EA924A13E63904 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _ItemIds_k__BackingField; // 0x28
	::System::Boolean _IsEffect_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_UPDATE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ItemIds()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_GET_ITEMIDS_OFFSET))(this);
	}

	::System::Void set_ItemIds(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_SET_ITEMIDS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEffect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_GET_ISEFFECT_OFFSET))(this);
	}

	::System::Void set_IsEffect(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_SET_ISEFFECT_OFFSET))(this, a1);
	}
};
