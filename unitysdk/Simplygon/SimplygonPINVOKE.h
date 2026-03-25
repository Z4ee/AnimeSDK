#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class SimplygonPINVOKE_SWIGExceptionHelper; }
namespace Simplygon { class SimplygonPINVOKE_SWIGStringHelper; }
namespace System { class String; }

#define SIMPLYGON_SIMPLYGONPINVOKE_DEINITIALIZESIMPLYGON_OFFSET UNITYSDK_OFFSET(0x18364120)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPARRAY_OFFSET UNITYSDK_OFFSET(0x18364690)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCHARTAGGREGATORSETTINGS_OFFSET UNITYSDK_OFFSET(0x183678A0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCOLORCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x18365430)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCOLORCASTER_OFFSET UNITYSDK_OFFSET(0x18365290)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0x183662C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGESETTINGS_OFFSET UNITYSDK_OFFSET(0x18366140)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x18364C00)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x18364E00)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALCASTER_OFFSET UNITYSDK_OFFSET(0x18364D80)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALTABLE_OFFSET UNITYSDK_OFFSET(0x18364B80)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIAL_OFFSET UNITYSDK_OFFSET(0x18364960)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPNORMALCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x18365AE0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPNORMALCASTER_OFFSET UNITYSDK_OFFSET(0x183658C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPIPELINESERIALIZER_OFFSET UNITYSDK_OFFSET(0x18367720)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPIPELINE_OFFSET UNITYSDK_OFFSET(0x183675F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPROCESSINGOBJECT_OFFSET UNITYSDK_OFFSET(0x18364C80)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREDUCTIONPROCESSOR_OFFSET UNITYSDK_OFFSET(0x183664D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREDUCTIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18365CB0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREMESHINGPROCESSOR_OFFSET UNITYSDK_OFFSET(0x183668E0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREMESHINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x183665D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENEEXPORTER_OFFSET UNITYSDK_OFFSET(0x18366C90)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENEIMPORTER_OFFSET UNITYSDK_OFFSET(0x18366EB0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENE_OFFSET UNITYSDK_OFFSET(0x18366A60)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSETTINGSOBJECT_OFFSET UNITYSDK_OFFSET(0x18364D00)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSHADINGNODE_OFFSET UNITYSDK_OFFSET(0x18367270)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSHADINGTEXTURENODE_OFFSET UNITYSDK_OFFSET(0x18367410)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x18367A50)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTABLE_OFFSET UNITYSDK_OFFSET(0x18364790)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x183671F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTEXTURE_OFFSET UNITYSDK_OFFSET(0x18366FD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPVALUEARRAY_OFFSET UNITYSDK_OFFSET(0x18364710)
#define SIMPLYGON_SIMPLYGONPINVOKE_FAILED_OFFSET UNITYSDK_OFFSET(0x18363AA0)
#define SIMPLYGON_SIMPLYGONPINVOKE_GETLASTINITIALIZATIONERROR_OFFSET UNITYSDK_OFFSET(0x18364390)
#define SIMPLYGON_SIMPLYGONPINVOKE_INITIALIZESIMPLYGON__SWIG_0_OFFSET UNITYSDK_OFFSET(0x18363D80)
#define SIMPLYGON_SIMPLYGONPINVOKE_INITIALIZESIMPLYGON__SWIG_1_OFFSET UNITYSDK_OFFSET(0x18364080)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CLEARERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x18363830)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CLEARWARNINGMESSAGES_OFFSET UNITYSDK_OFFSET(0x183635C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATECOLORCASTER_OFFSET UNITYSDK_OFFSET(0x1835F730)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEMATERIALTABLE_OFFSET UNITYSDK_OFFSET(0x1835F1C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1835EB00)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATENORMALCASTER_OFFSET UNITYSDK_OFFSET(0x1835FBD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEPIPELINESERIALIZER_OFFSET UNITYSDK_OFFSET(0x18362090)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEREDUCTIONPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1835FF90)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEREMESHINGPROCESSOR_OFFSET UNITYSDK_OFFSET(0x18360420)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESCENEEXPORTER_OFFSET UNITYSDK_OFFSET(0x18360990)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESCENEIMPORTER_OFFSET UNITYSDK_OFFSET(0x18360E30)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESHADINGTEXTURENODE_OFFSET UNITYSDK_OFFSET(0x18361B20)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x18362530)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATETEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x18361690)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x183612D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_ERROROCCURRED_OFFSET UNITYSDK_OFFSET(0x18362DF0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_GETERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x18363340)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_GETWARNINGMESSAGES_OFFSET UNITYSDK_OFFSET(0x183630A0)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_SENDTELEMETRY_OFFSET UNITYSDK_OFFSET(0x18362860)
#define SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_WARNINGOCCURRED_OFFSET UNITYSDK_OFFSET(0x18362B70)
#define SIMPLYGON_SIMPLYGONPINVOKE_SIMPLYGON_VERSION_GET_OFFSET UNITYSDK_OFFSET(0x183644F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPARRAY_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367AD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SETCHARTAGGREGATORMODE_OFFSET UNITYSDK_OFFSET(0x183677A0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SETSEPARATEOVERLAPPINGCHARTS_OFFSET UNITYSDK_OFFSET(0x18367820)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368950)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET UNITYSDK_OFFSET(0x18365310)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x183653B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368050)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_GETCOLORCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x18365210)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_GETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x183650D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x18365190)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x18364FA0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x18365030)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETSOURCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x18364F10)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETSOURCETEXTURES_OFFSET UNITYSDK_OFFSET(0x18364E80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367FD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x18366240)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREWIDTH_OFFSET UNITYSDK_OFFSET(0x183661C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183682D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_GETCHARTAGGREGATORSETTINGS_OFFSET UNITYSDK_OFFSET(0x183660C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_GETOUTPUTMATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0x18365D30)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETAPPLYNEWMATERIALIDS_OFFSET UNITYSDK_OFFSET(0x18365FC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATEMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x18365DC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATETANGENTS_OFFSET UNITYSDK_OFFSET(0x18365EC0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATETEXCOORDS_OFFSET UNITYSDK_OFFSET(0x18365E40)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETTEXCOORDGENERATORTYPE_OFFSET UNITYSDK_OFFSET(0x18366040)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETUSEFULLRETEXTURING_OFFSET UNITYSDK_OFFSET(0x18365F40)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368250)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367D50)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALCASTERSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367F50)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALCASTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367ED0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_ADDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18364AF0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x183649E0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_COPY_OFFSET UNITYSDK_OFFSET(0x18364A60)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367CD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_ADDMATERIALCHANNEL_OFFSET UNITYSDK_OFFSET(0x18364810)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_SETSHADINGNETWORK_OFFSET UNITYSDK_OFFSET(0x183648B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367C50)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETGENERATETANGENTSPACENORMALS_OFFSET UNITYSDK_OFFSET(0x18365A60)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET UNITYSDK_OFFSET(0x18365940)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x183659E0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368150)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_GETNORMALCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x18365840)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_GETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x18365700)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x183657C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x183655D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x18365660)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETSOURCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x18365540)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETSOURCETEXTURES_OFFSET UNITYSDK_OFFSET(0x183654B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183680D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPOBJECT_SETNAME_OFFSET UNITYSDK_OFFSET(0x183645F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINESERIALIZER_LOADPIPELINEFROMFILE_OFFSET UNITYSDK_OFFSET(0x18367670)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINESERIALIZER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183688D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_RUNSCENEFROMFILE_OFFSET UNITYSDK_OFFSET(0x18367490)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_RUNSCENE_OFFSET UNITYSDK_OFFSET(0x18367560)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368850)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPPROCESSINGOBJECT_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367DD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_GETREDUCTIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18366450)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x18366340)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_SETSCENE_OFFSET UNITYSDK_OFFSET(0x183663C0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368350)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETS_OFFSET UNITYSDK_OFFSET(0x18365B60)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETTRIANGLERATIO_OFFSET UNITYSDK_OFFSET(0x18365C20)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183681D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETMAPPINGIMAGESETTINGS_OFFSET UNITYSDK_OFFSET(0x18366860)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x18366760)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETREMESHINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x183667E0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x18366650)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_SETSCENE_OFFSET UNITYSDK_OFFSET(0x183666D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368450)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGSETTINGS_SETONSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x18366550)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGSETTINGS_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183683D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_RUN_OFFSET UNITYSDK_OFFSET(0x18366C10)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SETEXPORTFILEPATH_OFFSET UNITYSDK_OFFSET(0x18366AE0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SETSCENE_OFFSET UNITYSDK_OFFSET(0x18366B80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368550)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_GETSCENE_OFFSET UNITYSDK_OFFSET(0x18366DB0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_RUN_OFFSET UNITYSDK_OFFSET(0x18366E30)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_SETIMPORTFILEPATH_OFFSET UNITYSDK_OFFSET(0x18366D10)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183685D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_GETMATERIALTABLE_OFFSET UNITYSDK_OFFSET(0x18366960)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_GETTEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x183669E0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183684D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSETTINGSOBJECT_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367E50)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGNODE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368750)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SETTEXCOORDLEVEL_OFFSET UNITYSDK_OFFSET(0x18367390)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SETTEXTURENAME_OFFSET UNITYSDK_OFFSET(0x183672F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183687D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_GETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x18367920)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_GETITEM_OFFSET UNITYSDK_OFFSET(0x183679A0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183689D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTABLE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367BD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_ADDTEXTURE_OFFSET UNITYSDK_OFFSET(0x18367160)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x18367050)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_COPY_OFFSET UNITYSDK_OFFSET(0x183670D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x183686D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURE_SETFILEPATH_OFFSET UNITYSDK_OFFSET(0x18366F30)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURE_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18368650)
#define SIMPLYGON_SIMPLYGONPINVOKE_SPVALUEARRAY_SWIGUPCAST_OFFSET UNITYSDK_OFFSET(0x18367B50)
#define SIMPLYGON_SIMPLYGONPINVOKE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18364570)

namespace Simplygon
{
	inline static constexpr unsigned int SimplygonPINVOKE_TypeDefinitionIndex = 29581;

	class SimplygonPINVOKE : public ::System::Object
	{
	public:
		static ::Simplygon::SimplygonPINVOKE_SWIGStringHelper** StaticGet_swigStringHelper()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGStringHelper**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_TypeDefinitionIndex)->GetStaticField(0x31F00);
		}
		static ::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper** StaticGet_swigExceptionHelper()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGExceptionHelper**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_TypeDefinitionIndex)->GetStaticField(0x31F08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE__CCTOR_OFFSET))();
		}

		static ::System::Int32 Simplygon_VERSION_get()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SIMPLYGON_VERSION_GET_OFFSET))();
		}

		static ::System::Void spObject_SetName(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPOBJECT_SETNAME_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spArray(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPARRAY_OFFSET))(jarg1);
		}

		static ::System::Void delete_spValueArray(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPVALUEARRAY_OFFSET))(jarg1);
		}

		static ::System::Void delete_spTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTABLE_OFFSET))(jarg1);
		}

		static ::System::Void spMaterial_AddMaterialChannel(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_ADDMATERIALCHANNEL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMaterial_SetShadingNetwork(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2, ::System::Runtime::InteropServices::HandleRef jarg3)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_SETSHADINGNETWORK_OFFSET))(jarg1, jarg2, jarg3);
		}

		static ::System::Void delete_spMaterial(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIAL_OFFSET))(jarg1);
		}

		static ::System::Void spMaterialTable_Clear(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_CLEAR_OFFSET))(jarg1);
		}

		static ::System::Void spMaterialTable_Copy(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_COPY_OFFSET))(jarg1, jarg2);
		}

		static ::System::Int32 spMaterialTable_AddMaterial(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_ADDMATERIAL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spMaterialTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALTABLE_OFFSET))(jarg1);
		}

		static ::System::Void delete_spMappingImage(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGE_OFFSET))(jarg1);
		}

		static ::System::Void delete_spProcessingObject(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPROCESSINGOBJECT_OFFSET))(jarg1);
		}

		static ::System::Void delete_spSettingsObject(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSETTINGSOBJECT_OFFSET))(jarg1);
		}

		static ::System::Void delete_spMaterialCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALCASTER_OFFSET))(jarg1);
		}

		static ::System::Void delete_spMaterialCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMATERIALCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void spColorCaster_SetSourceTextures(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETSOURCETEXTURES_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spColorCaster_SetSourceMaterials(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETSOURCEMATERIALS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spColorCaster_SetMappingImage(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETMAPPINGIMAGE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spColorCaster_SetOutputFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SETOUTPUTFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::String* spColorCaster_GetOutputFilePath(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::String*(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_GETOUTPUTFILEPATH_OFFSET))(jarg1);
		}

		static ::System::Int32 spColorCaster_RunProcessing(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_RUNPROCESSING_OFFSET))(jarg1);
		}

		static ::System::IntPtr spColorCaster_GetColorCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_GETCOLORCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spColorCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCOLORCASTER_OFFSET))(jarg1);
		}

		static ::System::Void spColorCasterSettings_SetMaterialChannel(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spColorCasterSettings_SetOutputImageFileFormat(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spColorCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCOLORCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void spNormalCaster_SetSourceTextures(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETSOURCETEXTURES_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCaster_SetSourceMaterials(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETSOURCEMATERIALS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCaster_SetMappingImage(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETMAPPINGIMAGE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCaster_SetOutputFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SETOUTPUTFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::String* spNormalCaster_GetOutputFilePath(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::String*(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_GETOUTPUTFILEPATH_OFFSET))(jarg1);
		}

		static ::System::Int32 spNormalCaster_RunProcessing(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_RUNPROCESSING_OFFSET))(jarg1);
		}

		static ::System::IntPtr spNormalCaster_GetNormalCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_GETNORMALCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spNormalCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPNORMALCASTER_OFFSET))(jarg1);
		}

		static ::System::Void spNormalCasterSettings_SetMaterialChannel(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCasterSettings_SetOutputImageFileFormat(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spNormalCasterSettings_SetGenerateTangentSpaceNormals(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SETGENERATETANGENTSPACENORMALS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spNormalCasterSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPNORMALCASTERSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void spReductionSettings_SetReductionTargets(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2, ::System::Boolean jarg3, ::System::Boolean jarg4, ::System::Boolean jarg5, ::System::Boolean jarg6)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETS_OFFSET))(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
		}

		static ::System::Void spReductionSettings_SetReductionTargetTriangleRatio(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Single jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Single))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETTRIANGLERATIO_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spReductionSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREDUCTIONSETTINGS_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMappingImageSettings_GetOutputMaterialSettings(::System::Runtime::InteropServices::HandleRef jarg1, ::System::UInt32 jarg2)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_GETOUTPUTMATERIALSETTINGS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetGenerateMappingImage(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATEMAPPINGIMAGE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetGenerateTexCoords(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATETEXCOORDS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetGenerateTangents(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETGENERATETANGENTS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetUseFullRetexturing(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETUSEFULLRETEXTURING_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetApplyNewMaterialIds(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETAPPLYNEWMATERIALIDS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageSettings_SetTexCoordGeneratorType(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SETTEXCOORDGENERATORTYPE_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr spMappingImageSettings_GetChartAggregatorSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_GETCHARTAGGREGATORSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spMappingImageSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGESETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void spMappingImageOutputMaterialSettings_SetTextureWidth(::System::Runtime::InteropServices::HandleRef jarg1, ::System::UInt32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREWIDTH_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spMappingImageOutputMaterialSettings_SetTextureHeight(::System::Runtime::InteropServices::HandleRef jarg1, ::System::UInt32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREHEIGHT_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spMappingImageOutputMaterialSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Int32 spReductionProcessor_RunProcessing(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_RUNPROCESSING_OFFSET))(jarg1);
		}

		static ::System::Void spReductionProcessor_SetScene(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_SETSCENE_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr spReductionProcessor_GetReductionSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_GETREDUCTIONSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spReductionProcessor(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREDUCTIONPROCESSOR_OFFSET))(jarg1);
		}

		static ::System::Void spRemeshingSettings_SetOnScreenSize(::System::Runtime::InteropServices::HandleRef jarg1, ::System::UInt32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGSETTINGS_SETONSCREENSIZE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spRemeshingSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREMESHINGSETTINGS_OFFSET))(jarg1);
		}

		static ::System::Int32 spRemeshingProcessor_RunProcessing(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_RUNPROCESSING_OFFSET))(jarg1);
		}

		static ::System::Void spRemeshingProcessor_SetScene(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_SETSCENE_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr spRemeshingProcessor_GetMappingImage(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETMAPPINGIMAGE_OFFSET))(jarg1);
		}

		static ::System::IntPtr spRemeshingProcessor_GetRemeshingSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETREMESHINGSETTINGS_OFFSET))(jarg1);
		}

		static ::System::IntPtr spRemeshingProcessor_GetMappingImageSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_GETMAPPINGIMAGESETTINGS_OFFSET))(jarg1);
		}

		static ::System::Void delete_spRemeshingProcessor(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPREMESHINGPROCESSOR_OFFSET))(jarg1);
		}

		static ::System::IntPtr spScene_GetMaterialTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_GETMATERIALTABLE_OFFSET))(jarg1);
		}

		static ::System::IntPtr spScene_GetTextureTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_GETTEXTURETABLE_OFFSET))(jarg1);
		}

		static ::System::Void delete_spScene(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENE_OFFSET))(jarg1);
		}

		static ::System::Void spSceneExporter_SetExportFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SETEXPORTFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spSceneExporter_SetScene(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SETSCENE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Int32 spSceneExporter_Run(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_RUN_OFFSET))(jarg1);
		}

		static ::System::Void delete_spSceneExporter(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENEEXPORTER_OFFSET))(jarg1);
		}

		static ::System::Void spSceneImporter_SetImportFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_SETIMPORTFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr spSceneImporter_GetScene(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_GETSCENE_OFFSET))(jarg1);
		}

		static ::System::Int32 spSceneImporter_Run(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_RUN_OFFSET))(jarg1);
		}

		static ::System::Void delete_spSceneImporter(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSCENEIMPORTER_OFFSET))(jarg1);
		}

		static ::System::Void spTexture_SetFilePath(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURE_SETFILEPATH_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spTexture(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTEXTURE_OFFSET))(jarg1);
		}

		static ::System::Void spTextureTable_Clear(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_CLEAR_OFFSET))(jarg1);
		}

		static ::System::Void spTextureTable_Copy(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_COPY_OFFSET))(jarg1, jarg2);
		}

		static ::System::Int32 spTextureTable_AddTexture(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_ADDTEXTURE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spTextureTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPTEXTURETABLE_OFFSET))(jarg1);
		}

		static ::System::Void delete_spShadingNode(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSHADINGNODE_OFFSET))(jarg1);
		}

		static ::System::Void spShadingTextureNode_SetTextureName(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SETTEXTURENAME_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spShadingTextureNode_SetTexCoordLevel(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SETTEXCOORDLEVEL_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spShadingTextureNode(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSHADINGTEXTURENODE_OFFSET))(jarg1);
		}

		static ::System::Int32 spPipeline_RunSceneFromFile(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2, ::System::String* jarg3, ::System::Int32 jarg4)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_RUNSCENEFROMFILE_OFFSET))(jarg1, jarg2, jarg3, jarg4);
		}

		static ::System::Int32 spPipeline_RunScene(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2, ::System::Int32 jarg3)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_RUNSCENE_OFFSET))(jarg1, jarg2, jarg3);
		}

		static ::System::Void delete_spPipeline(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPIPELINE_OFFSET))(jarg1);
		}

		static ::System::IntPtr spPipelineSerializer_LoadPipelineFromFile(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINESERIALIZER_LOADPIPELINEFROMFILE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spPipelineSerializer(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPPIPELINESERIALIZER_OFFSET))(jarg1);
		}

		static ::System::Void spChartAggregatorSettings_SetChartAggregatorMode(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SETCHARTAGGREGATORMODE_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void spChartAggregatorSettings_SetSeparateOverlappingCharts(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Boolean jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SETSEPARATEOVERLAPPINGCHARTS_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spChartAggregatorSettings(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPCHARTAGGREGATORSETTINGS_OFFSET))(jarg1);
		}

		static ::System::UInt32 spStringArray_GetItemCount(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::UInt32(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_GETITEMCOUNT_OFFSET))(jarg1);
		}

		static ::System::String* spStringArray_GetItem(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Int32 jarg2)
		{
			return ((::System::String*(*)(::System::Runtime::InteropServices::HandleRef, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_GETITEM_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void delete_spStringArray(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DELETE_SPSTRINGARRAY_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateMaterial(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEMATERIAL_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateMaterialTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEMATERIALTABLE_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateColorCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATECOLORCASTER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateNormalCaster(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATENORMALCASTER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateReductionProcessor(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEREDUCTIONPROCESSOR_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateRemeshingProcessor(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEREMESHINGPROCESSOR_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateSceneExporter(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESCENEEXPORTER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateSceneImporter(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESCENEIMPORTER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateTexture(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATETEXTURE_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateTextureTable(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATETEXTURETABLE_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateShadingTextureNode(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESHADINGTEXTURENODE_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreatePipelineSerializer(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATEPIPELINESERIALIZER_OFFSET))(jarg1);
		}

		static ::System::IntPtr ISimplygon_CreateStringArray(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CREATESTRINGARRAY_OFFSET))(jarg1);
		}

		static ::System::Void ISimplygon_SendTelemetry(::System::Runtime::InteropServices::HandleRef jarg1, ::System::String* jarg2, ::System::String* jarg3, ::System::String* jarg4, ::System::String* jarg5)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_SENDTELEMETRY_OFFSET))(jarg1, jarg2, jarg3, jarg4, jarg5);
		}

		static ::System::Boolean ISimplygon_WarningOccurred(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_WARNINGOCCURRED_OFFSET))(jarg1);
		}

		static ::System::Boolean ISimplygon_ErrorOccurred(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_ERROROCCURRED_OFFSET))(jarg1);
		}

		static ::System::Void ISimplygon_GetWarningMessages(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_GETWARNINGMESSAGES_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void ISimplygon_GetErrorMessages(::System::Runtime::InteropServices::HandleRef jarg1, ::System::Runtime::InteropServices::HandleRef jarg2)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_GETERRORMESSAGES_OFFSET))(jarg1, jarg2);
		}

		static ::System::Void ISimplygon_ClearWarningMessages(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CLEARWARNINGMESSAGES_OFFSET))(jarg1);
		}

		static ::System::Void ISimplygon_ClearErrorMessages(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_ISIMPLYGON_CLEARERRORMESSAGES_OFFSET))(jarg1);
		}

		static ::System::Boolean Failed(::System::Int32 jarg1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_FAILED_OFFSET))(jarg1);
		}

		static ::System::IntPtr InitializeSimplygon__SWIG_0(::System::String* jarg1, ::System::String* jarg2)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_INITIALIZESIMPLYGON__SWIG_0_OFFSET))(jarg1, jarg2);
		}

		static ::System::IntPtr InitializeSimplygon__SWIG_1(::System::String* jarg1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_INITIALIZESIMPLYGON__SWIG_1_OFFSET))(jarg1);
		}

		static ::System::Void DeinitializeSimplygon(::System::Runtime::InteropServices::HandleRef jarg1)
		{
			return ((::System::Void(*)(::System::Runtime::InteropServices::HandleRef))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_DEINITIALIZESIMPLYGON_OFFSET))(jarg1);
		}

		static ::System::Int32 GetLastInitializationError()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_GETLASTINITIALIZATIONERROR_OFFSET))();
		}

		static ::System::IntPtr spArray_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPARRAY_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spValueArray_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPVALUEARRAY_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spTable_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTABLE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMaterial_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIAL_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMaterialTable_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALTABLE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMappingImage_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spProcessingObject_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPROCESSINGOBJECT_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spSettingsObject_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSETTINGSOBJECT_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMaterialCaster_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALCASTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMaterialCasterSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMATERIALCASTERSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spColorCaster_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spColorCasterSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCOLORCASTERSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spNormalCaster_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spNormalCasterSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPNORMALCASTERSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spReductionSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMappingImageSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGESETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spMappingImageOutputMaterialSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spReductionProcessor_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREDUCTIONPROCESSOR_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spRemeshingSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spRemeshingProcessor_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPREMESHINGPROCESSOR_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spScene_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spSceneExporter_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEEXPORTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spSceneImporter_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSCENEIMPORTER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spTexture_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spTextureTable_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPTEXTURETABLE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spShadingNode_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGNODE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spShadingTextureNode_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSHADINGTEXTURENODE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spPipeline_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINE_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spPipelineSerializer_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPPIPELINESERIALIZER_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spChartAggregatorSettings_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPCHARTAGGREGATORSETTINGS_SWIGUPCAST_OFFSET))(jarg1);
		}

		static ::System::IntPtr spStringArray_SWIGUpcast(::System::IntPtr jarg1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SPSTRINGARRAY_SWIGUPCAST_OFFSET))(jarg1);
		}
	};
}
