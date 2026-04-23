#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1ED936FF8C554768.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED;
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildUnit; }
namespace RPG::GameCore { class TeamBuildConfigRow; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TEAMBUILDRECIPE_CHECKCOLLETIONSCONTAINNUMBER_OFFSET UNITYSDK_OFFSET(0xB2A4E20)
#define RPG_CLIENT_TEAMBUILDRECIPE_CREATEBUILD_OFFSET UNITYSDK_OFFSET(0xB2A4820)
#define RPG_CLIENT_TEAMBUILDRECIPE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB2A2CE0)
#define RPG_CLIENT_TEAMBUILDRECIPE_CREATE_OFFSET UNITYSDK_OFFSET(0xB2A2240)
#define RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB2A4CE0)
#define RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_OFFSET UNITYSDK_OFFSET(0xB2A4C70)
#define RPG_CLIENT_TEAMBUILDRECIPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2A4DD0)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB2A3CF0)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xB2A3400)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARPOSITION_OFFSET UNITYSDK_OFFSET(0xB2A3D00)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_TEAMMATES_OFFSET UNITYSDK_OFFSET(0xB2A3D10)
#define RPG_CLIENT_TEAMBUILDRECIPE__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A4810)
#define RPG_CLIENT_TEAMBUILDRECIPE__GETALTERNATIVEAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB2A4400)
#define RPG_CLIENT_TEAMBUILDRECIPE__TRYCONVERTAVATARID_OFFSET UNITYSDK_OFFSET(0xB2A3D20)
#define RPG_CLIENT_TEAMBUILDRECIPE___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB2A4FE0)
#define RPG_CLIENT_TEAMBUILDRECIPE___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2A4FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildRecipe_TypeDefinitionIndex = 62777;

	class TeamBuildRecipe : public ::System::Object
	{
	public:
		// static const ::System::Int32 _UnitCount = 0x3; // 0x0
		::Il2CppArray<::RPG::Client::TeamBuildUnit*>* _Teammates_k__BackingField; // 0x10
		::System::UInt32 _TargetAvatarPosition_k__BackingField; // 0x18
		::Struct_2_1ED936FF8C554768 _Identifier_k__BackingField; // 0x1C

		::System::Void _ctor(::Struct_2_1ED936FF8C554768& identifier, ::System::UInt32 targetAvatarPosition, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>* teammates)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_1ED936FF8C554768&, ::System::UInt32, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE__CTOR_OFFSET))(this, identifier, targetAvatarPosition, teammates);
		}

		::Struct_2_1ED936FF8C554768 get_Identifier()
		{
			return ((::Struct_2_1ED936FF8C554768(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_TargetAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_TargetAvatarPosition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARPOSITION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::TeamBuildUnit*>* get_Teammates()
		{
			return ((::Il2CppArray<::RPG::Client::TeamBuildUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GET_TEAMMATES_OFFSET))(this);
		}

		static ::RPG::Client::TeamBuildRecipe* Create(::RPG::GameCore::TeamBuildConfigRow* row, ::System::Collections::Generic::ICollection_1<::System::UInt32>* exclusiveAvatarIDs)
		{
			return ((::RPG::Client::TeamBuildRecipe*(*)(::RPG::GameCore::TeamBuildConfigRow*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_CREATE_OFFSET))(row, exclusiveAvatarIDs);
		}

		static ::RPG::Client::TeamBuildRecipe* Create_1(::Class_1_4BC858D7C27E10ED* lineup, ::System::Collections::Generic::ICollection_1<::System::UInt32>* exclusiveAvatarIDs)
		{
			return ((::RPG::Client::TeamBuildRecipe*(*)(::Class_1_4BC858D7C27E10ED*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_CREATE_1_OFFSET))(lineup, exclusiveAvatarIDs);
		}

		::RPG::Client::TeamBuild* CreateBuild()
		{
			return ((::RPG::Client::TeamBuild*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_CREATEBUILD_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TeamBuildRecipe* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean _TryConvertAvatarID(::System::Int32 avatarIDIndex, ::System::Collections::Generic::IList_1<::System::UInt32>* avatarIDs, ::System::Collections::Generic::IList_1<::System::UInt32>* backupIDs, ::System::Collections::Generic::ICollection_1<::System::UInt32>* exclusiveAvatarIDs)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE__TRYCONVERTAVATARID_OFFSET))(avatarIDIndex, avatarIDs, backupIDs, exclusiveAvatarIDs);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* _GetAlternativeAvatarIDs(::System::Collections::Generic::IList_1<::System::UInt32>* avatarIDs, ::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>* exclusiveIDGroups)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE__GETALTERNATIVEAVATARIDS_OFFSET))(avatarIDs, exclusiveIDGroups);
		}

		static ::System::Boolean CheckColletionsContainNumber(::System::UInt32 number, ::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>* numberGroups)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_CHECKCOLLETIONSCONTAINNUMBER_OFFSET))(number, numberGroups);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
