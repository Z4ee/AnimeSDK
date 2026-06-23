#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsComponentMetaInfo.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class IEcsComponentList; }
namespace Nap::NapECS { class IPatchedList; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_CREATECOMPONENTLIST_OFFSET UNITYSDK_OFFSET(0x1B2EDB50)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_CREATEDATACOMPONENTLIST_OFFSET UNITYSDK_OFFSET(0x1B2E6A20)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_GETIDWORLDTYPEMASK_OFFSET UNITYSDK_OFFSET(0x1B2EF540)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_GETMETAINFO_OFFSET UNITYSDK_OFFSET(0x1B2ECF70)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_GETSHOTCLASSID_OFFSET UNITYSDK_OFFSET(0x1B2EF640)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1B2EF420)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_GET_CLASSIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2EF180)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_INITMETA_OFFSET UNITYSDK_OFFSET(0x1B2EF240)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_ISWORLDTYPECOMP_OFFSET UNITYSDK_OFFSET(0x1B2EF580)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC_SET_CLASSIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2EF1E0)
#define NAP_NAPECS_ECSCOMPONENTMETASTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2EF690)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentMetaStatic_TypeDefinitionIndex = 37333;

	class EcsComponentMetaStatic : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet__typeToId()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMetaStatic_TypeDefinitionIndex)->GetStaticField(0x28A50);
		}
		static ::Il2CppArray<::Nap::NapECS::EcsComponentMetaInfo>** StaticGet__metaInfo()
		{
			return (::Il2CppArray<::Nap::NapECS::EcsComponentMetaInfo>**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMetaStatic_TypeDefinitionIndex)->GetStaticField(0x28A58);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet__typeFromId()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMetaStatic_TypeDefinitionIndex)->GetStaticField(0x28A60);
		}
		static ::System::UInt32* StaticGet__ClassIdCount_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMetaStatic_TypeDefinitionIndex)->GetStaticField(0x8990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC__CCTOR_OFFSET))();
		}

		static ::System::UInt32 get_ClassIdCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_GET_CLASSIDCOUNT_OFFSET))();
		}

		static ::System::Void set_ClassIdCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_SET_CLASSIDCOUNT_OFFSET))(value);
		}

		static ::System::Void InitMeta(::System::Int32 worldTypeTotal)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_INITMETA_OFFSET))(worldTypeTotal);
		}

		static ::System::Type* GetType(::System::Int32 classId)
		{
			return ((::System::Type*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_GETTYPE_OFFSET))(classId);
		}

		static ::Nap::NapECS::EcsComponentMetaInfo& GetMetaInfo(::System::Int32 classId)
		{
			return ((::Nap::NapECS::EcsComponentMetaInfo&(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_GETMETAINFO_OFFSET))(classId);
		}

		static ::Nap::NapECS::IEcsComponentList* CreateComponentList(::System::Int32 classId)
		{
			return ((::Nap::NapECS::IEcsComponentList*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_CREATECOMPONENTLIST_OFFSET))(classId);
		}

		static ::Nap::NapECS::IPatchedList* CreateDataComponentList(::System::Int32 classId)
		{
			return ((::Nap::NapECS::IPatchedList*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_CREATEDATACOMPONENTLIST_OFFSET))(classId);
		}

		static ::System::Int32 GetIdWorldTypeMask(::System::Int32 worldTypeID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_GETIDWORLDTYPEMASK_OFFSET))(worldTypeID);
		}

		static ::System::Boolean IsWorldTypeComp(::System::Int32 worldTypeID, ::System::Int32 classID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_ISWORLDTYPECOMP_OFFSET))(worldTypeID, classID);
		}

		static ::System::UInt16 GetShotClassID(::System::Int32 classID)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTMETASTATIC_GETSHOTCLASSID_OFFSET))(classID);
		}
	};
}
